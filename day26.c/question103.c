#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000, amount;

    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter amount: ");
            scanf("%f", &amount);

            balance += amount;
            printf("Updated Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter amount: ");
            scanf("%f", &amount);

            if(amount > balance)
                printf("Insufficient Balance");
            else
            {
                balance -= amount;
                printf("Updated Balance = %.2f", balance);
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}