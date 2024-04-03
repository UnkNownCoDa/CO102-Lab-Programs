#include <stdio.h>

int main()
{
    int size1, size2;
    int max_size = 100;
    char string1[max_size];
    char string2[max_size];
    char c;

    printf("Enter first string: ");
    for (size1 = 0; (c = getchar()) != '\n' && size1 < max_size; ++size1){
        string1[size1] = c;
    }
    printf("Enter second string: ");
    for (size2 = 0; (c = getchar()) != '\n' && size2 < max_size; ++size2){
        string2[size2] = c;
    }
    
    if (size1 != size2){
        printf("Strings are not the same\n");
        return 0;
    }

    for (int i = 0; i < size1; ++i){
        if (string1[i] != string2[i]){
            printf("Strings are not the same\n");
            return 0;
        }
    }

    printf("Strings are the same\n");

    return 0;
}