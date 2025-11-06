#include <stdio.h>

int main() {
    float principal;  // 貸款本金
    float rate;       // 年利率
    int days;         // 借款天數
    float interest;   // 計算出的利息

    printf("Enter loan principal (-1 to end): ");
    scanf_s("%f", &principal);

    while (principal != -1) {

        printf("Enter interest rate: ");
        scanf_s("%f", &rate);

        printf("Enter term of the loan in days: ");
        scanf_s("%d", &days);

        // 計算利息
        interest = principal * rate * days / 365;

        printf("The interest charge is $%.2f\n\n", interest);

        // 再次詢問下一組資料
        printf("Enter loan principal (-1 to end): ");
        scanf_s("%f", &principal);
    }

    return 0;
}