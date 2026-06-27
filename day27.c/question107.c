#include <stdio.h>

struct Salary
{
    float basic;
    float bonus;
    float deduction;
};

int main()
{
    struct Salary s;
    float netSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &s.basic);

    printf("Enter Bonus: ");
    scanf("%f", &s.bonus);

    printf("Enter Deduction: ");
    scanf("%f", &s.deduction);

    netSalary = s.basic + s.bonus - s.deduction;

    printf("Net Salary = %.2f", netSalary);

    return 0;
}