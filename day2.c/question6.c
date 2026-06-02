#include <stdio.h>

int main() {
    long long num, temp, reverse = 0;
    int sign = 1;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) {
        sign = -1;
        num = -num;
    }

    temp = num;

    while (temp > 0) {
        reverse = reverse * 10 + (temp % 10);
        temp /= 10;
    }

    reverse *= sign;

    printf("Reversed number = %lld\n", reverse);

    return 0;
}