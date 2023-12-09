#include<stdio.h>
#include<math.h>

int main() {
    int n, remainder, original, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        sum += pow(remainder, 3);
        n /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong Number.\n", original);
    } else {
        printf("Not an Armstrong Number.\n");
    }

    return 0;
}
