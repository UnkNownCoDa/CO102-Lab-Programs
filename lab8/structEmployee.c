#include <stdio.h>

struct employee{
    char name[100];
    int age;
    int phoneno;
    char email[100];
};

int main(){
    char c;
    int size;
    struct employee emp;

    printf("Enter name of employee: ");
    scanf("%s", emp.name);

    printf("Enter phoneno of employee: ");
    scanf("%d", &emp.phoneno);

    printf("Enter employee email: ");
    scanf("%s", emp.email);

    printf("Enter employee age: ");
    scanf("%d", &emp.age);

    printf("Employee details:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Email: %s\n", emp.email);
    printf("Phoneno: %d\n", emp.phoneno);

    return 0;    
}
