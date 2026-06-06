#include <stdio.h>

int main()
{
    int binary, temp, digit;
    int decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    temp = binary;

    while(temp > 0)
    {
        digit = temp % 10;

        if(digit != 0 && digit != 1)
        {
            printf("Invalid Binary Number");
            return 0;
        }

        decimal = decimal + (digit * base);
        base = base * 2;

        temp = temp / 10;
    }

    printf("Decimal = %d", decimal);

    return 0;
}