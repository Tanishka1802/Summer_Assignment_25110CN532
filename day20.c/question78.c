#include <stdio.h>

int main()
{
    int n;
    int symmetric = 1;

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
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric");

    return 0;
}