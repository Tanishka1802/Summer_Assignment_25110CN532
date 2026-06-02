#include <stdio.h>

int main() {
    long long num;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    if (num == 0)
        sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}