
#include <stdio.h>

int main(){
    int size = 10, temp, min_index = 0;
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
            if (array[j] < array[min_index]){
                min_index = j;
            }
        }

        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }

    //prints out the array
    printf("Array: ");
    for (int i = 0; i < size; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
