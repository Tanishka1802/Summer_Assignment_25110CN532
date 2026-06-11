#include <stdio.h>

long long factorial(int n)
{
    long long fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Factorial does not exist for negative numbers");
        return 0;
    }

    printf("Factorial = %lld", factorial(n));

    return 0;
}