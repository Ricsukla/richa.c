#include <stdio.h>

int main() {
    
    int age;
    float salary;
    char name[100];
    

    printf("Enter the name\n ");
    scanf("%s", name);
    printf("Enter the age\n ");
    scanf("%d", &age);
    printf("Enter the salary\n ");
    scanf("%f", &salary);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Enter the character:");
    getchar();
    char ch=getchar();
    
    printf("You entered: ");
    putchar(ch);
    

    return 0;
}
