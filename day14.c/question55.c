#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if(n < 2)
    {
        printf("Need at least 2 elements");
        return 0;
    }

    int arr[n];

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if(largest == secondLargest)
    {
        printf("No second largest element");
    }
    else
    {
        printf("Second Largest Element = %d", secondLargest);
    }

    return 0;
}