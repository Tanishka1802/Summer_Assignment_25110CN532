#include <stdio.h>
#include <string.h>

int main()
{
    char s1[200], s2[200];
    int ch;

    printf("Enter first string: ");
    scanf(" %[^\n]", s1);

    do
    {
        printf("\n1.Length\n2.Copy\n3.Concatenate\n4.Compare\n5.Reverse\n6.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Length = %lu\n", strlen(s1));
                break;

            case 2:
                strcpy(s2, s1);
                printf("Copied String = %s\n", s2);
                break;

            case 3:
                printf("Enter second string: ");
                scanf(" %[^\n]", s2);

                strcat(s1, s2);

                printf("Concatenated String = %s\n", s1);
                break;

            case 4:
                printf("Enter second string: ");
                scanf(" %[^\n]", s2);

                if (strcmp(s1, s2) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");

                break;

            case 5:
            {
                int i, j;
                char t;

                j = strlen(s1) - 1;

                for (i = 0; i < j; i++, j--)
                {
                    t = s1[i];
                    s1[i] = s1[j];
                    s1[j] = t;
                }

                printf("Reversed String = %s\n", s1);
                break;
            }

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (ch != 6);

    return 0;
}