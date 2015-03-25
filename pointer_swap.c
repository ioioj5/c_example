#include <stdio.h>

// 函数声明
// int swap (int *p1, int *p2);
int swap (int *, int *);

int main(){
    int a = 10, b = 20;

    printf("转换前: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("转换后: a=%d, b=%d\n", a, b);
    return 0;
}

// 自定义转换函数
int swap(int *p1, int *p2){
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

/**
 * 输出
 */
/**
转换前: a=10, b=20
转换后: a=20, b=10
*****/