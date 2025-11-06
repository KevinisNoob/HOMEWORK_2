#include <stdio.h>

int main() {
    int AccountNumber;
    float BeginningBalance;
    float totalCharges;
    float totalCredits;
    float CreditLimit;
    float NewBalance;

    printf("Enter account number (-1 to end): ");
    scanf_s("%d", &AccountNumber);

    while (AccountNumber != -1) {
        printf("Enter beginning balance: ");
        scanf_s("%f", &BeginningBalance);

        printf("Enter total charges: ");
        scanf_s("%f", &totalCharges);

        printf("Enter total credits: ");
        scanf_s("%f", &totalCredits);

        printf("Enter credit limit: ");
        scanf_s("%f", &CreditLimit);

        // 計算新餘額
        NewBalance = BeginningBalance + totalCharges - totalCredits;

        // 顯示資訊
        printf("\nAccount: %d\n", AccountNumber);
        printf("Credit limit: %.2f\n", CreditLimit);
        printf("Balance: %.2f\n", NewBalance);

        // 判斷是否超出信用額度
        if (NewBalance > CreditLimit) {
            printf("Credit limit exceeded.\n");
        }

        printf("\nEnter account number (-1 to end): ");
        scanf_s("%d", &AccountNumber);
    }

    return 0;
}