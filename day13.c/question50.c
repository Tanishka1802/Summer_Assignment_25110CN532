#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid Size");
        return 0;
    }

    int arr[n];

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}