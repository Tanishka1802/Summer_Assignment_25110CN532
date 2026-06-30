#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n=0;
    int ch,id,i,found;

    do
    {
        printf("\n1.Add Book\n2.Display Books\n3.Search Book\n4.Delete Book\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter Book ID Name Author: ");
                scanf("%d%s%s",&b[n].id,b[n].name,b[n].author);
                n++;
                printf("Book Added\n");
                break;

            case 2:
                if(n==0)
                    printf("No Books\n");
                else
                {
                    printf("ID\tName\tAuthor\n");
                    for(i=0;i<n;i++)
                        printf("%d\t%s\t%s\n",b[i].id,b[i].name,b[i].author);
                }
                break;

            case 3:
                printf("Enter Book ID: ");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(b[i].id==id)
                    {
                        printf("%d %s %s\n",b[i].id,b[i].name,b[i].author);
                        found=1;
                        break;
                    }
                }
                if(!found)
                    printf("Book Not Found\n");
                break;

            case 4:
                printf("Enter Book ID: ");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(b[i].id==id)
                    {
                        int j;
                        for(j=i;j<n-1;j++)
                            b[j]=b[j+1];
                        n--;
                        found=1;
                        printf("Book Deleted\n");
                        break;
                    }
                }
                if(!found)
                    printf("Book Not Found\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(ch!=5);

    return 0;
}