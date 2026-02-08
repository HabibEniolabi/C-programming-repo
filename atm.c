#include <stdio.h>

int setPin()
{
    int pin;
    printf("Enter your desired 4 digits: ");
    scanf("%d", &pin);

    return pin;
}

int checkPin(int correctPin, int enteredPin)
{
    return enteredPin == correctPin;
}

int main()
{
    int enteredPin;
    int correctPin;
    int choice;
    float balance = 1000.0, amount;

    printf("Welcome to Simple ATM\n");

    // SET PIN FIRST
    correctPin = setPin();

    // Then enter PIN
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (!checkPin(correctPin, enteredPin))
    {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }

    do
    {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Your balance is: ₦%.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0)
            {
                balance += amount;
                printf("Deposit successful.\n");
            }
            else
            {
                printf("Invalid amount.\n");
            }
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= 0)
            {
                printf("Invalid amount.\n");
            }
            else if (amount > balance)
            {
                printf("Insufficient Fund.\n");
            }
            else if (amount > 10000)
            {
                balance -= (amount + 50);
                printf("₦50 charge applied.\nPlease collect your cash.\n");
            }
            else
            {
                balance -= amount;
                printf("Please collect your cash.\n");
            }
            break;

        case 4:
            printf("Thank you for using the ATM.\n");
            break;

        default:
            printf("Invalid option.\n");
        }
    } while (choice != 4);

    return 0;
}
