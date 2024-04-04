#include <stdio.h>
#define bufferSize 150
#define rowSize 4
#define colSize 4

void getMatrix(int matrix[rowSize][colSize], char* buffer);

void addMatrix(int matrix1[rowSize][colSize], int matrix2[rowSize][colSize], int resultMatrix[rowSize][colSize]);

int main(){

    int matrix1[rowSize][colSize];
    int matrix2[rowSize][colSize];
    int resultMatrix[rowSize][colSize];

    char buffer[bufferSize];
    char c;

    printf("Matrix1\n");
    
    getMatrix(matrix1, buffer);
    
    printf("Matrix2\n");

    getMatrix(matrix2, buffer);

    printf("Matrix1:\n");
    for (int row = 0; row < rowSize; ++row){
        for (int col = 0; col < colSize; ++col){
            printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }

    printf("Matrix2:\n");
    for (int row = 0; row < rowSize; ++row){
        for (int col = 0; col < colSize; ++col){
            printf("%d ", matrix2[row][col]);
        }
        printf("\n");
    }

    addMatrix(matrix1, matrix2, resultMatrix);

    printf("Result:\n");
    for (int row = 0; row < rowSize; ++row){
        for (int col = 0; col < colSize; ++col){
            printf("%d ", resultMatrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}

void getMatrix(int matrix[rowSize][colSize], char* buffer){

    int size, col, row, num;
    char c;

    for (row = 0; row < rowSize; ++row){
        printf("Enter row %d: ", row + 1);
        for (size = 0; (c = getchar()) != '\n' && size < bufferSize-1; ++size){
            buffer[size] = c;        
        }

        col = 0; 
        num = 0;

        for (int i = 0; i <= size; ++i){
            if (buffer[i] == ' ' || i == size){
                matrix[row][col] = num;
                num = 0;
                col++;
                continue;
            }
            if (col == colSize){
                break;
            }
            num *= 10;
            num += buffer[i] - '0';
        }
    }

}
void addMatrix(int matrix1[rowSize][colSize], int matrix2[rowSize][colSize], int resultMatrix[rowSize][colSize]){
    for (int row = 0; row < rowSize; ++row){
        for (int column = 0; column < colSize; ++ column){
            resultMatrix[row][column] = matrix1[row][column] + matrix2[row][column];
        }
    }
}
