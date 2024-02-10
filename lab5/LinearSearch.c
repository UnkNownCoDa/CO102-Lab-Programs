#include <stdio.h>

int main(){
    int size = 10, search, found = 0;
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

    printf("Enter an element to search: ");
    scanf("%d", &search);

    for (int i = 0; i < size; ++i){
        if (array[i] == search){
            found = 1; 
            break;
        }
    }

    if (found == 1){
        printf("Element is in the array\n");
    }else{
        printf("Element is not in the array\n");
    }

    return 0;
}