#include<stdio.h>
// 冒泡排序
// 它重复地走访过要排序的元素列，依次比较两个相邻的元素，
// 如果顺序（如从大到小、首字母从Z到A）错误就把他们交换过来。
// 走访元素的工作是重复地进行直到没有相邻元素需要交换，也就是说该元素列已经排序完成。
int bubble(int *a, int len) {
    // int Len = sizeof(a)/ sizeof(int);
    for(int i = 0; i < len; i++) {
        printf("%2d: ", i+1);
        for (int j = 0; j < len - i - 1; j++) {
            int temp;
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
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