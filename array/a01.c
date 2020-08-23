#include <stdio.h>
void swap(int *p1, int *p2);
void swap2(int *p1, int *p2);

int a01() {
//    int a[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
//    int *p;
//    p = a;
//
//    printf("a[0] = %d, a[2] = %d\n",*p, *(p+2));

    int a = 3, b = 5;
    int *p_1, *p_2;
    p_1 = &a;
    p_2 = &b;
    swap2(p_1, p_2);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
// 地址交换
void swap(int *p1, int *p2) {
    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
}
// 值交换
void swap2(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}