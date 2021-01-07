#include <stdio.h>
// 九九乘法表
int t04() {
//    for(int i = 1; i <= 9; i++) {
//        printf("| ");
//        for (int j = 1; j <= 9; j++) {
//            if ( j <= i ) {
//                printf("%2d *%2d = %2d |", j, i, i * j);
//            }
//        }
//        printf("\n");
//    }

    // 反向九九乘法表
    for(int i = 9; i >= 1; i--) {
        printf("| ");
        for (int j = 1; j <= 9; j++) {
            if ( j <= i ) {
                printf("%2d *%2d = %2d |", j, i, i * j);
            }
        }
        printf("\n");
    }
}