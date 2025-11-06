#include <stdio.h>

int main(void) {
    int side1, side2, hypotenuse;

    printf("Pythagorean triples (a, b, c) where sides ≤ 500:\n\n");
    printf(" side1\t side2\t hypotenuse\n");
    printf(" ----------------------------\n");

    // 三層巢狀迴圈：搜尋所有可能組合
    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = side1; side2 <= 500; side2++) {  // 從 side1 開始，避免重複
            for (hypotenuse = side2; hypotenuse <= 500; hypotenuse++) {
                // 檢查是否滿足畢氏定理
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    printf("%6d\t%6d\t%6d\n", side1, side2, hypotenuse);
                }
            }
        }
    }

    return 0;
}
