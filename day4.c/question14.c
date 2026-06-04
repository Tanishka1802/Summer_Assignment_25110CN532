#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if(x < 0)
    {
        printf("Invalid Input");
        return 0;
    }

    if(x == 0)
    {
        printf("0");
        return 0;
    }

    long long first = 0;
    long long second = 1;

    for(int i = 1; i < x; i++)
    {
        long long nextTerm = first + second;
        first = second;
        second = nextTerm;
    }

    printf("%lld", second);

    return 0;
}