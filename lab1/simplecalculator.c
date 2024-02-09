#include <stdio.h>

int main(){
    
    float num1, num2, result;
    int op;
    
    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter a second number: ");
    scanf("%f", &num2);

    printf("Operations: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter desired operation: ");
    scanf("%d", &op);

    if (op == 1){
        result = num1 + num2;
        printf("Output: %.2f\n", result);
    }else if (op == 2){
        result = num1 - num2;
        printf("Output: %.2f\n", result);
    }else if (op == 3){
        result = num1 * num2;
        printf("Output: %.2f\n", result);
    }else if (op == 4){
        result = num1 / num2;
        printf("Output: %.2f\n", result);
    }else{
        printf("Invalid operation\n");
    }

    return 0;
}