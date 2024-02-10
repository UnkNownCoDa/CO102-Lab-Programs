#include <stdio.h>

int main(){
    int size = 10, found = 0, search, temp;
    int array[size];
    int lb = 0, ub = size, m;

    printf("Enter elements:\n");
    for (int i = 0; i < size; ++i){
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j){
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


    printf("Enter an element to search: ");
    scanf("%d", &search);

    while (ub >= lb){
        m = (ub + lb) / 2;

        if (array[m] == search){
            found = 1;
            break;
        }else if (array[m] > search){
            lb = m + 1;
        }else if (array[m] < search){
            ub = m - 1;
        }
    }

    if (found == 1){
        printf("Element is in the array\n");
    }else{
        printf("Element is not in the array\n");
    }

    return 0;
}