#include <stdio.h>

int main() {
    int a = 50, b = 4;
    float x = 5.5, y = 2;
    double m = 2.743, n = 3.666;
    //For integers
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b); 
    printf("a % b = %d\n", a % b);


    //For floats
    printf("x + y = %.2f\n", x + y); 
    printf("x - y = %.2f\n", x - y);
    printf("x * y = %.2f\n", x * y);
    printf("x / y = %.2f\n", x / y);

    //For doubles
    printf("m + n = %.3lf\n", m + n); 
    printf("m - n = %.3lf\n", m - n);     
    printf("m * n = %.3lf\n", m*n);
    printf("m / n = %.3lf\n", m / n); 
    return 0;
}
