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
    --size1;
    for (int i = 0; i <= size1; ++i){
        string2[i] = string1[size1 - i];
    }
    for (int i = 0; i <= size1; ++i){
        printf("%c", string2[i]);
    }
    printf("\n");

    return 0;
}
