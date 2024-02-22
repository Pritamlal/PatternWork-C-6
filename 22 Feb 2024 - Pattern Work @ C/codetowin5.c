#include <stdio.h>

int main() {
    int i, j, N;

    // Input the number of rows from the user
   
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        // Prints the first part of the pattern
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Prints spaces between two parts
        for (j = i * 2; j < N * 2; j++) {
            printf(" ");
        }

        // Prints the second part of the pattern
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

