#include <stdio.h>

struct Contact
{
    char name[50];
    long long phone;
};

int main()
{
    struct Contact c;

    printf("Enter Name: ");
    scanf("%s", c.name);

    printf("Enter Phone Number: ");
    scanf("%lld", &c.phone);

    printf("\nContact Details\n");
    printf("Name: %s\n", c.name);
    printf("Phone: %lld\n", c.phone);

    return 0;
}