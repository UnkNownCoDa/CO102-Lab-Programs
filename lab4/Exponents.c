#include <stdio.h>

int main(){
    int base, pow, result = 1;

    printf("Enter a number: ");
    scanf("%d", &base);

    printf("Enter power: ");
    scanf("%d", &pow);

    for (int i = 0; i < pow; ++i){
        result *= base;
    }
    printf("Result: %d\n", result);

    return 0;
}