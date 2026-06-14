#include <stdio.h>

int main()
{
    int n;
    int found = 0;

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

    printf("Duplicate Elements: ");

    for(int i = 0; i < n; i++)
    {
        int alreadyPrinted = 0;

        for(int k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
            {
                alreadyPrinted = 1;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }

    if(!found)
    {
        printf("None");
    }

    return 0;
}