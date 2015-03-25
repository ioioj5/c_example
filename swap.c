#include <stdio.h>
//宏定义: 定义swap(t, x, y) 以交换t类型的两个参数
#define swap(t, x, y)  {t temp; temp=a; a=b; b=temp;}

int main(){
    int a = 5, b= 10;
    swap(int, a, b);
    printf("a=%d, b=%d\n", a, b);

    float x=1.0, y=2.2;
    swap(float, x, y);
    printf("x=%f, y=%f\n", x, y);
    return 0;
}