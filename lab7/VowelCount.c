#include <stdio.h>

int main()
{
    int size;
    int max_size = 100, vowelCount = 0;
    char c;

    printf("Enter string: ");
    for (size = 0; (c = getchar()) != '\n' && size < max_size; ++size){
        if (c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'u'){
            vowelCount++;
        }
        if (c == 'A' || c =='E' || c == 'I' || c == 'O' || c == 'U'){
            vowelCount++;
        }
    }

    printf("Vowel count: %d\n", vowelCount);
    return 0;
}