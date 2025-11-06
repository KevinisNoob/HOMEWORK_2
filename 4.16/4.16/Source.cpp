#include <stdio.h>

int main(void) {
    int row, col;
    int size = 10; // 圖案高度與寬度

    printf("(A)\t\t(B)\t\t(C)\t\t(D)\n\n");

    // 一行一行印出所有圖案
    for (row = 1; row <= size; row++) {      // (A) 小到大靠左
        
        for (col = 1; col <= row; col++) {
            printf("%s", "*");
        }
        for (col = row; col < size; col++) {
            printf("%s", " ");
        }

        printf("\t"); // 分隔 (A) 與 (B)

        for (col = row; col <= size; col++) { // (B) 大到小靠左
            printf("%s", "*");
        }
        for (col = 1; col < row; col++) {
            printf("%s", " ");
        }

        printf("\t"); // 分隔 (B) 與 (C)

        for (col = 1; col < row; col++) {    // (C) 大到小靠右
            printf("%s", " ");
        }
        for (col = row; col <= size; col++) {
            printf("%s", "*");
        }

        printf("\t"); // 分隔 (C) 與 (D)

        
        for (col = row; col < size; col++) {  // (D) 小到大靠右
            printf("%s", " ");
        }
        for (col = 1; col <= row; col++) {
            printf("%s", "*");
        }

        printf("\n"); // 換行印下一列
    }

    return 0;
}
