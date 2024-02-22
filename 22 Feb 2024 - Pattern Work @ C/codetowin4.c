#include <stdio.h>

int main() {
    int i, j, N;

    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        // Prints the first part of the pattern
        for (j = 2; j <= i * 2; j += 2) {
            printf("%d ", j);
        }

        // Prints the second part of the pattern
        for (j = (i - 1) * 2; j >= 2; j -= 2) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

