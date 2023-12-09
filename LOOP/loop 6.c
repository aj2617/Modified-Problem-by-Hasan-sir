#include <stdio.h>

int main() {
 system("color 5F");
 system("color A");
    int num, i;
    unsigned long long factorial = 1;

    // Input
    printf("Input the number: ");
    scanf("%d", &num);

    // Calculate factorial using loop
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    // Output
    printf("The Factorial of %d is: %llu\n", num, factorial);

    return 0;
}

