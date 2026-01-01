#include <stdio.h>

int main() {
    int n, i, j, prime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {
        prime = 1;
        j = 2;

        for (; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d ", i);
    }

    return 0;
}

