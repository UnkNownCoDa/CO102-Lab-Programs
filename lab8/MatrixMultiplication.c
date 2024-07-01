#include <stdio.h>
#define bufferSize 150
#define rowSize 3
#define colSize 3

void getMatrix(int matrix[rowSize][colSize], char* buffer);

void multiplyMatrix(int matrix1[rowSize][colSize], int matrix2[rowSize][colSize], int resultMatrix[rowSize][colSize]);

int main(){

    int matrix1[rowSize][colSize] = {0};
    int matrix2[rowSize][colSize] = {0};
    int resultMatrix[rowSize][colSize] = {0};

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

    multiplyMatrix(matrix1, matrix2, resultMatrix);

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
    int sign = 1;
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
                if (sign == 0){
                    num *= -1;
                }
                matrix[row][col] = num;
                num = 0;
                col++;
                sign = 1;
                continue;
            }
            if (col == colSize){
                break;
            }
            if (buffer[i] == '-'){
                sign = 0;
                continue;
            }
            num *= 10;
            num += buffer[i] - '0';

        }
    }

}
void multiplyMatrix(int matrix1[rowSize][colSize], int matrix2[rowSize][colSize], int resultMatrix[rowSize][colSize]){
    int sum;
    for (int row = 0; row < rowSize; ++row){
        sum = 0;
        for (int column = 0; column < colSize; ++ column){
            for (int i = 0; i < colSize; ++i){
                resultMatrix[row][column] += matrix1[row][i] * matrix2[i][column];
            }
        }
        
    }
}
