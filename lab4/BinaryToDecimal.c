#include <stdio.h>

int main(){

    int binary, num = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
    while (binary != 0){
        num += (binary%10) * base;
        base *= 2;
        binary /= 10;
    }
    printf("Decimal number: %d\n", num);
    return 0;
}