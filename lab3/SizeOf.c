#include <stdio.h>


int main(){
    int size_int = sizeof(int);
    int size_uint = sizeof(unsigned int);
    int size_char = sizeof(char);
    int size_float = sizeof(float);
    int size_long = sizeof(long);
    int size_double = sizeof(double);

    printf("Size of basic datatypes:\n");
    printf("Int: %d\n", size_int);    
    printf("Unsigned int: %d\n", size_uint);
    printf("Char: %d\n", size_char);
    printf("Float: %d\n", size_float);
    printf("Long: %d\n", size_long);
    printf("Double: %d\n", size_double);
    
}