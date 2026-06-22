#include <stdio.h>

int main()
{
    char str[200];
    int words = 0;
    int i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
        {
            words++;
        }
        i++;
    }

    if(str[0] != '\0' && str[0] != '\n')
        words++;

    printf("Number of words = %d", words);

    return 0;
}