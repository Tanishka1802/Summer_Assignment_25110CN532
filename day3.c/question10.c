#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, j, isPrime;

    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {

        if (i <= 1)
            continue;

        isPrime = 1;

        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}