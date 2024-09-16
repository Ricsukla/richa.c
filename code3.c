#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int result;
    //If the condition is right, return 1 or else return 0
    printf("Relational operators:\n");
    printf("a > b  : %d\n", a > b); 
    printf("a < b  : %d\n", a < b);  
    printf("a >= b : %d\n", a >= b);  
    printf("a <= b : %d\n", a <= b);  
    printf("a == b : %d\n", a == b);  
    printf("a != b : %d\n\n", a != b); 

    printf("Logical operators:\n");
    printf("(a > 5 && b < 30)  : %d\n", (a > 5 && b < 30));
    printf("(a > 15 || b < 30) : %d\n", (a > 15 || b < 30));
    printf("!(a > b) : %d\n\n", !(a > b));  


    printf("Ternary operator:\n");
    result = (a > b) ? a : b; // If a > b we are assigning a to result, else assign b
    printf("The greater value between a and b is: %d\n\n", result);
    
    printf("Assignment operator:\n");
    result = a;
    printf("result = %d\n", result);

    return 0;
}
