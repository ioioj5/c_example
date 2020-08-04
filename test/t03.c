#include <stdio.h>
//打印如下杨辉三角形（打印前9行）。
// 提示：可以用二维数组实现，除了第一列和对角线元素外，指定区域内每一个元素的值等于上方元素与左上角元素之和。
//1
//1	1
//1	2	 1
//1	3	 3	1
//1	4	 6	4	1
//1	5	 10	10	5	1
//1	6	 15	20	15	6	1
//1	7	 21	35	35	21	7	1
//1	8	 28	56	70	56	28	8	1
int t03() {
    int matrix[9][9] = {0};

    // 赋值
    for(int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            // matrix[2][1] = matrix[1][0] + matrix[1][1]
            // matrix[3][1] = matrix[2][0] + matrix[2][1]
            // matrix[3][2] = matrix[2][1] + matrix[2][2]
            // 1.第一列 || 对角线
            if (j == 0 || j == i) {
                matrix[i][j] = 1;
            }else {
                if (j < i) {
                    matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
                }
            }
        }
    }

    // 输出
    for(int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (j <= i) {
                printf("%2d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}