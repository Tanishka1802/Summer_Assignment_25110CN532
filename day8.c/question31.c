#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid Input");
        return 0;
    }

    for(int i = 1; i <= n; i++)
    {
        for(char ch = 'A'; ch < 'A' + i; ch++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}