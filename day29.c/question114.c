#include <stdio.h>

int main()
{
    int a[100], n, i, ch, pos, val, found, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    do
    {
        printf("\n1.Display\n2.Insert\n3.Delete\n4.Search\n5.Maximum\n6.Minimum\n7.Reverse\n8.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                for (i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;

            case 2:
                printf("Enter position and value: ");
                scanf("%d%d", &pos, &val);

                if (pos < 1 || pos > n + 1)
                    printf("Invalid position\n");
                else
                {
                    for (i = n; i >= pos; i--)
                        a[i] = a[i - 1];

                    a[pos - 1] = val;
                    n++;

                    printf("Inserted\n");
                }
                break;

            case 3:
                printf("Enter position: ");
                scanf("%d", &pos);

                if (pos < 1 || pos > n)
                    printf("Invalid position\n");
                else
                {
                    for (i = pos - 1; i < n - 1; i++)
                        a[i] = a[i + 1];

                    n--;
                    printf("Deleted\n");
                }
                break;

            case 4:
                printf("Enter element: ");
                scanf("%d", &val);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (a[i] == val)
                    {
                        printf("Found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Not Found\n");

                break;

            case 5:
                temp = a[0];

                for (i = 1; i < n; i++)
                    if (a[i] > temp)
                        temp = a[i];

                printf("Maximum = %d\n", temp);
                break;

            case 6:
                temp = a[0];

                for (i = 1; i < n; i++)
                    if (a[i] < temp)
                        temp = a[i];

                printf("Minimum = %d\n", temp);
                break;

            case 7:
                for (i = 0; i < n / 2; i++)
                {
                    temp = a[i];
                    a[i] = a[n - i - 1];
                    a[n - i - 1] = temp;
                }

                printf("Array Reversed\n");
                break;

            case 8:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (ch != 8);

    return 0;
}