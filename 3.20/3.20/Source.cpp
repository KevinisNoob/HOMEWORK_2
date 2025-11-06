#include <stdio.h>

int main() {
    double hours, rate, salary;

    while (1) {
        // 輸入工作小時數
        printf("Enter # of hours worked (-1 to end): ");
        scanf_s("%lf", &hours);

        // 檢查是否結束程式
        if (hours == -1) {
            break;
        }

        // 輸入時薪
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf_s("%lf", &rate);

        // 計算薪資
        if (hours <= 40) {
            salary = hours * rate;
        }
        else {
            salary = 40 * rate + (hours - 40) * rate * 1.5;
        }

        // 顯示結果（保留兩位小數）
        printf("Salary is $%.2f\n\n", salary);
    }

    return 0;
}
