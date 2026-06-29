#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int qty;
    float price;
};

int main()
{
    struct Item item[100];
    int n = 0;
    int ch, id, i, found;

    do
    {
        printf("\n1.Add Item\n2.Display Items\n3.Search Item\n4.Update Quantity\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Enter ID Name Quantity Price: ");
                scanf("%d%s%d%f", &item[n].id, item[n].name, &item[n].qty, &item[n].price);
                n++;
                printf("Item Added\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No Items\n");
                }
                else
                {
                    printf("\nID\tName\tQty\tPrice\n");

                    for (i = 0; i < n; i++)
                        printf("%d\t%s\t%d\t%.2f\n", item[i].id, item[i].name, item[i].qty, item[i].price);
                }

                break;

            case 3:
                printf("Enter ID: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (item[i].id == id)
                    {
                        printf("%d %s %d %.2f\n", item[i].id, item[i].name, item[i].qty, item[i].price);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Item Not Found\n");

                break;

            case 4:
                printf("Enter ID: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (item[i].id == id)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &item[i].qty);
                        printf("Quantity Updated\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Item Not Found\n");

                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (ch != 5);

    return 0;
}