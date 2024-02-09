#include <stdio.h>

int main(){

    int size  = 10;
    int num[size], max;

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; ++i){
        scanf("%d", &num[i]);
    }
    
    max = num[0];

    for (int i = 0; i < size; ++i){
        if (num[i] > max){
            max = num[i];
        }
    }

    printf("%d is the largest number\n", max);
    return 0;
}