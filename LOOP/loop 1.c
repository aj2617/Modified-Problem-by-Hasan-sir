#include <stdio.h>
//while_for pre condition loop;do-while post conditional loop;
int main() {
 system("color A");
    int n, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

   printf("\n\nThe first %d natural numbers are: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d  ", i);
       sum += i;

    }

    printf("\n\nThe sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

