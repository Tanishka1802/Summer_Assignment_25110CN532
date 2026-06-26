#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("Q1. Capital of India?\n");
    printf("1.Delhi  2.Mumbai  3.Chennai\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("Q2. 2 + 2 = ?\n");
    printf("1.3  2.4  3.5\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("Q3. C language developed by?\n");
    printf("1.Dennis Ritchie  2.Jobs  3.Gates\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("Final Score = %d/3", score);

    return 0;
}