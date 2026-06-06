#include <stdio.h>

int main()
{
    int x, n;
    long long result = 1;

    printf("Enter base and power: ");
    scanf("%d %d", &x, &n);

    if(n < 0)
    {
        printf("Negative powers are not supported");
        return 0;
    }

    for(int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("%d^%d = %lld", x, n, result);

    return 0;
}