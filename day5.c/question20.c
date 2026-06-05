#include <stdio.h>

int main()
{
    int n, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0 || n == 1 || n == -1)
    {
        printf("No Prime Factors");
        return 0;
    }

    if(n < 0)
        n = -n;

    for(int i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            largest = i;
            n = n / i;
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}