#include <stdio.h>

int main(){

    int principle, rate, time;
    float si;

    printf("Enter principle amount: ");
    scanf("%d", &principle);
    printf("Enter rate: ");
    scanf("%d", &rate);
    printf("Enter time: ");
    scanf("%d", &time);

    si = (float)(principle * rate * time) / 100;

    printf("Simple Interest: %.2f\n", si);
    return 0;
}