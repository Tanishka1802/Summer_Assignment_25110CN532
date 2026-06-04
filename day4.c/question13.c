#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if(x <= 0)
    {
        printf("Invalid Input");
        return 0;
    }

    long long first = 0;
    long long second = 1;

    for(int i = 0; i < x; i++)
    {
        printf("%lld ", first);

        long long nextTerm = first + second;
        first = second;
        second = nextTerm;
    }

    return 0;
}