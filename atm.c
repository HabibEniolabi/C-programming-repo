#include <stdio.h>

int main() {
    int pin = 1234, enteredPin;
    int choice;
    float balance = 1000.0, amount;

    printf("Welcome to Simple ATM\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }

    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is: ₦%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful.\n");
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                } else {
                    printf("Insufficient balance or invalid amount.\n");
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
