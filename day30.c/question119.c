#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n=0;
    int ch,id,i,found;

    do
    {
        printf("\n1.Add Employee\n2.Display Employees\n3.Search Employee\n4.Update Salary\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter ID Name Salary: ");
                scanf("%d%s%f",&e[n].id,e[n].name,&e[n].salary);
                n++;
                printf("Employee Added\n");
                break;

            case 2:
                if(n==0)
                    printf("No Records\n");
                else
                {
                    printf("ID\tName\tSalary\n");
                    for(i=0;i<n;i++)
                        printf("%d\t%s\t%.2f\n",e[i].id,e[i].name,e[i].salary);
                }
                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(e[i].id==id)
                    {
                        printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
                        found=1;
                        break;
                    }
                }
                if(!found)
                    printf("Employee Not Found\n");
                break;

            case 4:
                printf("Enter Employee ID: ");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(e[i].id==id)
                    {
                        printf("Enter New Salary: ");
                        scanf("%f",&e[i].salary);
                        printf("Salary Updated\n");
                        found=1;
                        break;
                    }
                }
                if(!found)
                    printf("Employee Not Found\n");
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