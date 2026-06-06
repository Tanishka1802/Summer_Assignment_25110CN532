#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Enter a positive number");
        return 0;
    }

    while(n > 0)
    {
        if(n % 2 == 1)
        {
            count++;
        }

        n = n / 2;
    }

    printf("Number of Set Bits = %d", count);

    return 0;
}