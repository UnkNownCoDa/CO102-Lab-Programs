#include <stdio.h>

int main()
{
    int size, right;
    int max_size = 100, flag = 0;
    char string[max_size];
    char c;

    printf("Enter string: ");
    for (size = 0; (c = getchar()) != '\n' && size < max_size; ++size){
        string[size] = c;
    }
    right = size - 1;

    for (int i = 0; i != right; ++i){
        if (string[i] != string[right - i]){
            flag = 1;
            break;
        }
    }

    if (flag){
        printf("String is not a palindrom\n");
    }
    else{
        printf("String is a palindrom\n");
    }


    return 0;
}