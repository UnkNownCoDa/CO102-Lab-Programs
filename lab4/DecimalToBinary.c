#include <stdio.h>

int main(){

    int binary = 0, num, div = 1;

    printf("Enter number: ");
    scanf("%d", &num);
    
    while (num != 0){
        binary +=  (num%2) * div;
        div *= 10;
        num /= 2;
        
    }
    printf("Decimal number: %d\n", binary);
    return 0;
}