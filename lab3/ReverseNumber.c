#include <stdio.h>

int main(){

    int num;
    int rnum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0){
        rnum *= 10;
        rnum += num % 10;
        num /= 10;
    } 
    printf("Reversed number: %d\n", rnum);
    return 0;
}