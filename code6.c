#include <stdio.h>

int main() {
    int i;
    int n;
    //for
    printf("Enter a number:\n ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    

    // while loop
    printf("Enter a number:\n ");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    

    // 3. Do-while
    printf("Enter a number:\n ");
    scanf("%d", &n);
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= n);

    return 0;
}
