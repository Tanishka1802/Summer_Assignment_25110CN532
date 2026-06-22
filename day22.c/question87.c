#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;

        if(str[i] == '\0')
            continue;

        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                str[j] = '\0';
            }
        }

        if(str[i] != '\0')
            printf("%c = %d\n", str[i], count);
    }

    return 0;
}