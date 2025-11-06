#include <stdio.h>

int main() {
    int paycode;
    double weeklyPay;

    printf("Enter paycode (-1 to end): ");
    scanf_s("%d", &paycode);

    while (paycode != -1) {
        switch (paycode) {
        case 1: {
            double salary;
            printf("Enter weekly salary: ");
            scanf_s("%lf", &salary);
            weeklyPay = salary;
            break;
        }

        case 2: {
            double hourlyWage;
            double hoursWorked;

            printf("Enter hourly wage: ");
            scanf_s("%lf", &hourlyWage);
            printf("Enter hours worked: ");
            scanf_s("%lf", &hoursWorked);

            if (hoursWorked <= 40) {
                weeklyPay = hoursWorked * hourlyWage;
            }
            else {
                weeklyPay = 40 * hourlyWage + (hoursWorked - 40) * hourlyWage * 1.5;
            }
            break;
        }

        case 3: {
            double grossSales;

            printf("Enter gross weekly sales: ");
            scanf_s("%lf", &grossSales);
            weeklyPay = 250.0 + grossSales * 0.057;
            break;
        }

        case 4: {
            double payPerPiece;
            int piecesProduced;

            printf("Enter pay per piece: ");
            scanf_s("%lf", &payPerPiece);
            printf("Enter number of pieces produced: ");
            scanf_s("%d", &piecesProduced);

            weeklyPay = payPerPiece * piecesProduced;
            break;
        }

        default:
            printf("Invalid paycode entered!\n");
            printf("Enter paycode (-1 to end): ");
            scanf_s("%d", &paycode);
            continue;
        }

        printf("Weekly pay is: $%.2f\n\n", weeklyPay);
        printf("Enter paycode (-1 to end): ");
        scanf_s("%d", &paycode);
    }

    printf("Program ended.\n");
    return 0;
}