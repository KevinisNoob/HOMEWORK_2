#include <stdio.h>

int main() {
    float sales;   // 總銷售額
    float salary;  // 計算後薪水

    printf("Enter sales in dollars (-1 to end): ");
    scanf_s("%f", &sales);

    // 當 sales 不是 -1 時則繼續
    while (sales != -1) {

        salary = 200.0 + sales * 0.09;

        printf("Salary is: $%.2f\n\n", salary);

        printf("Enter sales in dollars (-1 to end): ");
        scanf_s("%f", &sales);
    }

    return 0;
}