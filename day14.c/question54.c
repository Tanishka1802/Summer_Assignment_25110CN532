#include <stdio.h>

int main()
{
    int n, key, count = 0;

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

    printf("Enter element: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", key, count);

    return 0;
}