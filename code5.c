#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("The number %d is positive\n", num);

    
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number %d is even.\n", num);
    } 
    else {
        printf("The number %d is odd.\n", num);  
    }

    
    printf("Enter your age: ");
    scanf("%d", &num);
    if (num < 10) {
        printf("Child\n");
    } 
    else if (num >= 10 && num < 18) {
        printf("Teenager.\n");
    } 
    else if (num >= 18 && num < 60) {
        printf("Adult.\n");
    } 
    else {
        printf("Senior\n");
    }

    //Nested loops
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0) {
        if (num == 0) {
            printf("The number is zero.\n");
        } 
        else {
            printf("The number is positive.\n");
        }
    } 
    else {
        printf("The number is negative.\n");
    }

    //Switch case statement
    int choice;
    printf("Choose an option from 1 to 2:\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Welcome!\n");
            break;
        case 2:
            printf("Come inside!\n");
            break;
        default:
            printf("Invalid operation\n");
            break;
    }

    return 0;
    }

}
