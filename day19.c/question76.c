#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}