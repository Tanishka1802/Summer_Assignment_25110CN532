#include <stdio.h>

int main()
{
    int n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    int found = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(!found)
        printf("No Pair Found");

    return 0;
}