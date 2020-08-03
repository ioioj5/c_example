#include <stdio.h>

// 选择排序
// 第一次从待排序的数据元素中选出最小（或最大）的一个元素，
// 存放在序列的起始位置，然后再从剩余的未排序元素中寻找到最小（大）元素，
// 然后放到已排序的序列的末尾。以此类推，直到全部待排序的数据元素的个数为零

int selection(int *a, int len) {

    for (int i = 0; i < len; i++) {
        printf("%2d: ", i+1);
        int min = i;
        for (int j = i + 1; j < len; j++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        for (int k = 0; k < len; k++) {
            printf("%d ", a[k]);
        }
        printf("\n");
    }

    printf("----------------------\n");
    for(int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
