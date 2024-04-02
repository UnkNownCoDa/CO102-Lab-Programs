#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i){
        for (int j = 0; j < i+1; ++j){
            printf("%c", 65+i);
        }
        printf("\n");
    }

    return 0;
}