
#include <stdio.h>

int main() {
    int x;

    while (1) {
        printf("Enter the amount (enter 0 to exit): ");
        scanf("%d", &x);

        if (x == 0) {
            printf("Exiting the program.\n");
            break;
        }

        int bank_note[ ] = {1000,500, 100, 50, 20, 10, 5, 2, 1};
        int count;

        for (int i = 0; i < 9; i++) {
            count = x / bank_note[ i ];
            if (count > 0) {
                printf("Tk. %d = %d\n", bank_note[i], count);
                x %= bank_note[i];
            }
        }
    }

    return 0;
}
