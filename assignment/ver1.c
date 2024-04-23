#include <stdio.h>
#define boardS 3

typedef struct{
    int row;
    int col;
    char symbol;
}Element;

typedef struct{
    Element pos[6];
    int count;
}Board;

void dequeElement(Board *board){
    int size = sizeof(board->pos) / sizeof(board->pos[0]);

    for (int i = 0; i < size-1; ++i){
        board->pos[i] = board->pos[i+1];
    }
}

int checkWin(Board* board, int player){
    Element checkList[3];
    Element *current;
    char symbols[] = {'X', 'O'};
    int check;
    int ldag = 3, rdag = 3;

    int count = 0;
    int num = 0;
    for (int i = 0; i < 6; ++i){
        current = &board->pos[i];
        if (current->symbol == symbols[player]){
            checkList[count] = *current;
            count++;
        }
    }

    check = (
        (checkList[0].row == checkList[1].row) && 
        (checkList[2].row == checkList[0].row));

    if (check){
        printf("Win on column\n");
        return 1;
    }
    else{ 
        check = (
            (checkList[0].row != checkList[1].row) &&
            (checkList[2].row != checkList[1].row) && 
            (checkList[2].row != checkList[0].row));
        if (check){
            check = (
                (checkList[0].col == checkList[1].col) && 
                (checkList[2].col == checkList[0].col));

            if (check){
                printf("Win on row\n");
                return 1;
            }
            else{
                check = (
                    (checkList[0].col != checkList[1].col) &&
                    (checkList[2].col != checkList[1].col) && 
                    (checkList[2].col != checkList[0].col));
                if (check){
                    for (int i = 0; i < 3; ++i){
                        if (checkList[i].row == 1 && checkList[i].col == 10){
                            printf("Win on diagonal\n");
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int placeSymbol(int r, int c, Board *board, int player){
    char symbols[] = {'X', 'O'};
    Element current;

    if (r < 0 || r > 2){
        printf("Invalid input\n");
        return 0;
    }
    if (c < 0 || c > 2){
        printf("Invalid input\n");
        return 0;
    }

    printf("row: %d col: %d\n", r, c);
    current.row = r;
    switch (c){
        case 0:
            current.col = 0 | 12;
            break;
        case 1:
            current.col = 0 | 10;
            break;
        case 2:
            current.col = 0 | 9;
            break;
    }

    for (int i = 0; i < board->count; ++i){
        if (board->pos[i].row == current.row && board->pos[i].col == current.col){
            printf("Position not empty\n");
            return 0;
        }
    }

    if (board->count == 6){
        dequeElement(board);
        board->count--;
    }
    board->pos[board->count].row = current.row;
    board->pos[board->count].col = current.col;
    board->pos[board->count].symbol = symbols[player];
    board->count++;

    if (board->count == 6){
        board->pos[0].symbol += 'a' - 'A';
    }
    return 1; 
}

void mapPosition(Board *board){
    Element *current;
    int c, r;
    char returnBoard[3][3] = {
        "   ", "   ", "   ",
    };

    for (int i = 0; i < 6; ++i){
        current = &board->pos[i];
        if ((current->col & 7) == 0){
            continue;
        }
        if ((current->col & 4) == 4){
            c = 0;   
        }
        else if ((current->col & 2) == 2){
            c = 1;
        }
        else if ((current->col & 1) == 1){
            c = 2;
        }
        r = current->row;
        returnBoard[r][c] = current->symbol;
    }

    for (int i = 0; i < 3; ++i){
        printf("+---+---+---+\n");
        printf("| %c | %c | %c |\n", returnBoard[i][0], returnBoard[i][1], returnBoard[i][2]);
    }
    printf("+---+---+---+\n");
}

int main(){
    printf("Starting game\n");
    Board board;
    int win = 0;
    static int player = 0;
    char winner;
    int row, col;
    for (int i = 0; i < 6; ++i){
        board.pos[i].row = 0;
        board.pos[i].col = 0;
        board.pos[i].symbol = ' ';
        board.count = 0;
    }
    mapPosition(&board);
    while (!win){
        printf("Enter row and column(0-2): ");
        scanf("%d %d", &row, &col);
        if (!placeSymbol(row, col, &board, player)){
            mapPosition(&board);
            continue;
        }
        mapPosition(&board);
        if (board.count > 4){
            win = checkWin(&board, player);
        }
        player *= -1;
        player++;
    }
    if (player == 1){
        printf("%c is the winner\n", 'X');
    }
    else{
        printf("%c is the winner\n", 'O');
    }
    
    return 0;
}