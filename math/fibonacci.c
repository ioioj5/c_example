#include <stdio.h>
// 斐波那契数列
// F(1)=1，F(2)=1, F(n)=F(n - 1)+F(n - 2)（n ≥ 3，n ∈ N*）
int fibonacci () {
    int a[20] = {1, 1};

    for ( int i = 2; i < 20; i++) {
        a[i] = a[i-1] + a[i-2];
    }

    for ( int i = 0; i < 20; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}