#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n=0;

void add()
{
    printf("Enter Roll Name Marks: ");
    scanf("%d%s%f",&s[n].roll,s[n].name,&s[n].marks);
    n++;
    printf("Student Added\n");
}

void display()
{
    int i;

    if(n==0)
    {
        printf("No Records\n");
        return;
    }

    printf("Roll\tName\tMarks\n");

    for(i=0;i<n;i++)
        printf("%d\t%s\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
}

void search()
{
    int roll,i;

    printf("Enter Roll: ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
            return;
        }
    }

    printf("Student Not Found\n");
}

void update()
{
    int roll,i;

    printf("Enter Roll: ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            printf("Enter New Marks: ");
            scanf("%f",&s[i].marks);
            printf("Updated\n");
            return;
        }
    }

    printf("Student Not Found\n");
}

int main()
{
    int ch;

    do
    {
        printf("\n1.Add\n2.Display\n3.Search\n4.Update\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                add();
                break;

            case 2:
                display();
                break;

            case 3:
                search();
                break;

            case 4:
                update();
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