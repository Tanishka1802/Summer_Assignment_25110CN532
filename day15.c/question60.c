#include <stdio.h>

int main()
{
    int n;

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
    }

    int index = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[index++] = arr[i];
        }
    }

    while(index < n)
    {
        arr[index++] = 0;
    }

    printf("Array after moving zeroes:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}