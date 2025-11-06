#include <stdio.h>

int main() {
    int length, breadth;

    printf("Enter length of the rectangle: ");
    scanf_s("%d", &length);
    printf("Enter breadth of the rectangle: ");
    scanf_s("%d", &breadth);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < breadth; j++) {
            // 如果是邊框位置，印出 '+'，否則印空格
            if (i == 0 || i == length - 1 || j == 0 || j == breadth - 1)
                printf("+");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
