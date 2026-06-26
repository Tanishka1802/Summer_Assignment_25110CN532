#include <stdio.h>

int main()
{
    int secret = 7;
    int guess;

    printf("Guess a number between 1 and 10: ");

    while(1)
    {
        scanf("%d", &guess);

        if(guess == secret)
        {
            printf("Correct Guess!");
            break;
        }
        else if(guess < secret)
        {
            printf("Too Small, Try Again: ");
        }
        else
        {
            printf("Too Large, Try Again: ");
        }
    }

    return 0;
}