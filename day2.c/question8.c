#include <stdio.h>

int main() {
    long long num, original, reverse = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("Negative numbers are not palindrome.\n");
        return 0;
    }

    original = num;

    while (num > 0) {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }

    if (original == reverse)
        printf("%lld is a Palindrome number.\n", original);
    else
        printf("%lld is not a Palindrome number.\n", original);

    return 0;
}