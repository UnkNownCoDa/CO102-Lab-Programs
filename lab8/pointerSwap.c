#include <stdio.h>

int main(){
    int* ptr_a;
    int* ptr_b;
    int* temp;

    int num1;
    int num2;

    ptr_a = &num1;
    ptr_b = &num2;

    printf("Enter first number: ");
    scanf("%d", ptr_a);
    printf("Enter enter second number: ");
    scanf("%d", ptr_b);

    printf("Num1: %d Num2 %d\n", *ptr_a, *ptr_b);
    //swap
    temp = ptr_a;
    ptr_a = ptr_b;
    ptr_b = temp;

    printf("Num1: %d Num2: %d\n", *ptr_a, *ptr_b);

    return 0;
}