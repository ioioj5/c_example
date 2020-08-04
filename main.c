#include <stdio.h>

int bubble(int *a, int len);
int selection(int *a, int len);
int fibonacci();
int t01();
int t02();
int t03();
int t04();

int main() {
    int a[] = {2, 6, 1, 0, 8, 5, 7, 4, 3};
    int len = sizeof(a)/sizeof(int);


    printf("# Bubble Sort \n");
    bubble(a, len); // 冒泡排序
//
//    // 注意要把数组顺序打乱...
//
//    printf("# Selection Sort \n");
//    selection(a, len);
//
//    printf("# Fibonacci sequence \n");
//    fibonacci();
//
//    printf("# t01\n");
    // t01(); // 输入10名学生成绩，求其中最大值，最小值，平均值。
//    printf("------------\n");
//    t02(); // 求整数200~500间能被3整除的整数之和
//    printf("------------\n");
//    t03(); // 杨辉三角
//    printf("------------\n");
//    t04(); // 九九乘法表
}
