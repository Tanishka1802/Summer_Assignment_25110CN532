#include <stdio.h>

int isPalindrome(int n)
{
    int original = n;
    int rev = 0;

    while(n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    return original == rev;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Not a Palindrome");
        return 0;
    }

    if(isPalindrome(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome");

    return 0;
}