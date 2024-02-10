#include <stdio.h>

int main(){
    int num, pow, result = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter power: ");
    scanf("%d", &pow);

    for (int i = 0; i < pow; ++i){
        result *= num;
    }
    printf("Result: %d\n", result);

    return 0;
}