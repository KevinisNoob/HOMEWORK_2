#include <stdio.h>

int main(void) {
    int row, space, star;
    int size = 5;  //い丁程糴ê︽琍腹

    // 场
    for (row = 1; row <= size; row++) {

        for (space = 1; space <= size - row; space++) {
            printf("%s", " ");
        }


        for (star = 1; star <= 2 * row - 1; star++) {
            printf("%s", "*");
        }

        printf("\n");  // 传︽
    }

    // 场
    for (row = size - 1; row >= 1; row--) {

        for (space = 1; space <= size - row; space++) {
            printf("%s", " ");
        }


        for (star = 1; star <= 2 * row - 1; star++) {
            printf("%s", "*");
        }

        printf("\n");
    }

    return 0;
}
