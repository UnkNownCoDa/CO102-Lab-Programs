#include <stdio.h>

int main(){
    
    int length;
    char string[200];

    printf("Enter a string: ");
    scanf("%s", string);

    for (length = 0; string[length] != '\0'; ++length);
    printf("Length of string: %d\n", length);
    return 0;
}