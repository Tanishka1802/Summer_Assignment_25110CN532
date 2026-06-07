#include <stdio.h>

int rev = 0;

void reverse(int n)
{
    if(n == 0)
        return;

    rev = rev * 10 + (n % 10);
    reverse(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Enter a positive number");
        return 0;
    }

    reverse(n);

    printf("Reversed Number = %d", rev);

    return 0;
}