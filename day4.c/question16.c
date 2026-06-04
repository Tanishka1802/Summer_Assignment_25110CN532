#include <stdio.h>
#include <math.h>

int isArmstrong(long long n)
{
    if(n == 0)
        return 1;

    long long temp = n;
    int count = 0;

    while(temp > 0)
    {
        count++;
        temp /= 10;
    }

    temp = n;
    long long sum = 0;

    while(temp > 0)
    {
        int digit = temp % 10;
        sum += (long long)pow(digit, count);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    long long start, end;
    scanf("%lld %lld", &start, &end);

    if(start > end)
    {
        long long temp = start;
        start = end;
        end = temp;
    }

    for(long long i = start; i <= end; i++)
    {
        if(i >= 0 && isArmstrong(i))
        {
            printf("%lld ", i);
        }
    }

    return 0;
}