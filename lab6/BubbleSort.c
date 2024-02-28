#include <stdio.h>

int main(){
    int size = 10, temp;
    int array[size];


    printf("Enter elements:\n");
    for (int i = 0; i < size; ++i){
        scanf("%d", &array[i]);
    }

    //prints out the array
    printf("Array: ");
    for (int i = 0; i < size; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");

//sorting part 
    for (int i = 0; i < size; ++i){
        for (int j = i + 1; j < size; ++j){
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    //prints out the array
    printf("Array: ");
    for (int i = 0; i < size; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}