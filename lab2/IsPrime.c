#include <stdio.h>

int main(){
    int num, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; ++i){
        if (num % i == 0){
            flag = 1;
            break;
        }
    }

    if (!flag){
        printf("Number is a prime\n");
    }
    else{
        printf("Number is not a prime\n");
    }

    return 0;
}