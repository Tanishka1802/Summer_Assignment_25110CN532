#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    if(n < 0)
    {
        printf("Not an Armstrong Number");
        return 0;
    }

    long long original = n;
    long long temp = n;

    int digits = 0;

    if(temp == 0)
        digits = 1;

    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    long long sum = 0;

    while(temp > 0)
    {
        int digit = temp % 10;
        sum += (long long)pow(digit, digits);
        temp /= 10;
    }

    if(n == 0)
        sum = 0;

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}