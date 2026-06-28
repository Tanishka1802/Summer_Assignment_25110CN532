#include <stdio.h>

int main()
{
    int seats = 50;
    int book;

    printf("Available Seats = %d\n", seats);
    printf("Enter number of seats to book: ");
    scanf("%d", &book);

    if(book <= 0)
    {
        printf("Invalid Input");
    }
    else if(book > seats)
    {
        printf("Not Enough Seats");
    }
    else
    {
        seats -= book;
        printf("Booking Successful\n");
        printf("Remaining Seats = %d", seats);
    }

    return 0;
}