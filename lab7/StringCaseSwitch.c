#include <stdio.h>

int main()
{
    int size1, size2;
    int max_size = 100;
    int dif = 'a' - 'A';
    char string1[max_size];
    char string2[max_size];
    char c;

    printf("Enter first string: ");
    for (size1 = 0; (c = getchar()) != '\n' && size1 < max_size; ++size1){
        string1[size1] = c;
    }

    for (int i = 0; i < size1; ++i){
        if (string1[i] >= 'a' && string1[i] <= 'z'){
            string2[i] = string1[i] - dif;
        }
        else if (string1[i] >= 'A' && string1[i] <= 'Z'){
            string2[i] = string1[i] + dif;
        }
        else{
            string2[i] = string1[i];
        }
    }
    printf("Switched String: ");
    for (int i = 0; i < size1; ++i){
        printf("%c", string2[i]);
    }
    printf("\n");

    return 0;
}
