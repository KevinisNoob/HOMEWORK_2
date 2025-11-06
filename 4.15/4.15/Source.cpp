#include <stdio.h>
#include <math.h>  

int main(void) {
    double principal = 1000.0; // 初始本金（本金 1000 元）
    double rate;               // 利率
    int year;                  // 年份
    double amount;             // 計算每年本利和

    printf("本金 = %.2f\n\n", principal);
    printf("年份\t");

    // 利率從 5% 到 10%，每次增加 1%
    for (rate = 0.05; rate <= 0.10; rate += 0.01) {
        printf("%4.0f%%\t", rate * 100);  // 印出每個利率的標題（5%、6%、7%）
    }

    printf("\n-------------------------------------------------------\n"); //分隔線

    for (year = 1; year <= 10; ++year) {
        printf("%4d\t", year);  // 印出年份


        for (rate = 0.05; rate <= 0.10; rate += 0.01) {
            amount = principal * pow(1.0 + rate, year);
            printf("%7.2f\t", amount);  // 輸出每個利率下的金額
        }

        printf("\n");  
    }

    return 0;  
}
