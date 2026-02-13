#include <stdio.h>

int main()
{
    int choice;

    printf("1. Balance Inquiry\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Your balance is displayed.");
            break;

        case 2:
            printf("Withdraw Money selected.");
            break;

        case 3:
            printf("Deposit Money selected.");
            break;

        case 4:
            printf("Thank you. Exiting.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
