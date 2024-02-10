#include <stdio.h>


int main(){
    int num;
    int prev = 0, next = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i){
        printf("%d ", prev);
        temp = prev;
        prev = next;
        next += temp;
    }
    printf("\n");
    return 0;
}