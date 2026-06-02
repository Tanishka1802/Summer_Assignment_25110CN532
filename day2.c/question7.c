#include <stdio.h>

int main() {
    long long num;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    if (num == 0) {
        printf("Product of digits = 0\n");
        return 0;
    }

    while (num > 0) {
        product *= (num % 10);
        num /= 10;
    }

    printf("Product of digits = %lld\n", product);

    return 0;
}