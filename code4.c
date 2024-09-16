#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int result;
    result = a + b * c; 
    printf("a + b * c = %d\n", result);  

    result = (a + b) * c;  
    printf("(a + b) * c = %d\n", result);

    
    result = a * b / c; 
    printf("a * b / c = %d\n", result);  
    //left to right associavity
    result = a - b + c;  
    printf("a - b + c = %d\n", result);  

    printf("new values in a = %d, b = %d, c = %d\n", a, b, c); 
    a = 10;
    b = 20;
    c = 30;


    result = a + b % c;  
    printf("a + b %% c = %d\n", result); 



    return 0;
}
