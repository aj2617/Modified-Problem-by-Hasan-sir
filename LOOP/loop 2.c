#include<stdio.h>

int main() {
    int n, sum = 0;

    printf("Input the number of terms: ");
    scanf("%d", &n);

    printf("\nThe odd numbers are: ");
    for (int i = 1; i<=n;i++) {
        printf("%d ",2*i-1);
        sum =sum+2*i-1;

    }

    printf("\n\nThe sum of odd natural numbers up to %d terms: %d", n, sum);
    getch();
}
