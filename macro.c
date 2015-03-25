#include <stdio.h>
// 宏定义
//#define max(a, b) ((a > b) ? a : b)

// 函数声明
int max (int a, int b);

int main(){
    int numA = 10, numB = 20;

    printf("The bigger numbuer is:%d\n", max(numA, numB));
    return 0;
}

// 函数定义 : 比较两个数, 返回其中的最大数
int max(int a, int b){
    return ( a > b) ? a : b ;
}