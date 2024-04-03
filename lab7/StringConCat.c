#include <stdio.h>

int main()
{
    int size1, size2, size3;
    int max_size = 100;
    char string1[max_size];
    char string2[max_size];
    char catString[max_size*2];
    char c;

    printf("Enter first string: ");
    for (size1 = 0; (c = getchar()) != '\n' && size1 < max_size; ++size1){
        string1[size1] = c;
    }
    printf("Enter second string: ");
    for (size2 = 0; (c = getchar()) != '\n' && size2 < max_size; ++size2){
        string2[size2] = c;
    }
    
    for (int i = 0; i < size1; ++i){
        catString[i] = string1[i];
    }
    for (int i = 0; i <= size2; ++i){
        catString[i + size1 + 1] = string2[i];
    }

    size3 = size1 + size2;

    printf("Concatinated string: ");
    for (int i = 0; i <= size3; ++i){
        printf("%c", catString[i]);
    }
    printf("\n");

    return 0;
}