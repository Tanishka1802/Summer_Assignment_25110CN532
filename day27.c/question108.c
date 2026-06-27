#include <stdio.h>

int main()
{
    float marks1, marks2, marks3;
    float total, percentage;

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);

    total = marks1 + marks2 + marks3;
    percentage = total / 3;

    printf("\nTotal = %.2f\n", total);
    printf("Percentage = %.2f\n", percentage);

    if(percentage >= 90)
        printf("Grade: A");
    else if(percentage >= 75)
        printf("Grade: B");
    else if(percentage >= 50)
        printf("Grade: C");
    else
        printf("Grade: Fail");

    return 0;
}