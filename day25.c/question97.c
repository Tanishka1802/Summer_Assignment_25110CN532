#include <stdio.h>

int main()
{
    int n1, n2;

    scanf("%d", &n1);
    int arr1[n1];

    for(int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    scanf("%d", &n2);
    int arr2[n2];

    for(int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int i = 0, j = 0;

    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
            printf("%d ", arr1[i++]);
        else
            printf("%d ", arr2[j++]);
    }

    while(i < n1)
        printf("%d ", arr1[i++]);

    while(j < n2)
        printf("%d ", arr2[j++]);

    return 0;
}