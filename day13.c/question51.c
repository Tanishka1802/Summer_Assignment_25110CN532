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

    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest Element = %d\n", largest);
    printf("Smallest Element = %d", smallest);

    return 0;
}