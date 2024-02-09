#include <stdio.h> 

int main(){
    float num1, num2, sum, average;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;

    average = sum / 2;

    printf("Sum: %.2f\nAverage: %.2f\n", sum, average);

    return 0;
}