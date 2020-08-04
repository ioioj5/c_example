#include <stdio.h>
// 输入10名学生成绩，求其中最大值，最小值，平均值。

int t01() {
    // 1. 定义变量
    int scores[10];
    int sum = 0;
    double average;

    // 输入数据, 90 100 50 30 20 40 80 60 70 10
    printf("Please input the scores of 10 students: ");
    for ( int i = 0; i < 10; i++) {
        scanf("%d", &scores[i]);
    }
    printf("\n");

    // 打印输入数据
    printf("inputs: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    // 排序, 找出最大值和最小值以及累加总和
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if ( scores[j] > scores[j+1]) {
                int temp;
                temp = scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = temp;
            }
        }
        sum += scores[i];
    }
    average = sum / 10;
    printf("min: %d\n", scores[0]);
    printf("max: %d\n", scores[9]);
    printf("sum: %d\n", sum);
    printf("average: %.2f\n", average);

    for (int i = 0; i < 10; i++) {
        printf("%d ", scores[i]);
    }
    return 0;
}