#include <stdio.h>

int main() {
    int n, a = -1, b = 1, c;
    printf("Enter the number of terms to display: ");
    scanf("%d", &n);

    printf("\nHere is the Fibonacci series up to %d terms: ", n);

    for (int i = 1; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");
    getch();

}

