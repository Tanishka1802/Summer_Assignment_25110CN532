#include <stdio.h>

int main()
{
    int n, binary = 0, place = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if(n == 0)
    {
        printf("Binary = 0");
        return 0;
    }

    if(n < 0)
    {
        printf("Enter a positive number");
        return 0;
    }

    while(n > 0)
    {
        rem = n % 2;
        binary = binary + (rem * place);

        place = place * 10;
        n = n / 2;
    }

    printf("Binary = %d", binary);

    return 0;
}