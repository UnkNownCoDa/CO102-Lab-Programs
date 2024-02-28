#include <stdio.h>

int factorial(int num){
    if (num == 1 || num == 0){
        return 1;
    }

    return num * factorial(num - 1);

}
int main(){

    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Result: %d\n", result);

    return 0;
}