#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    long long lcm;

    scanf("%d %d", &a, &b);

    lcm = (long long)a * b / gcd(a, b);

    printf("%lld", lcm);

    return 0;
}