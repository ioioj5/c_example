/**
  指针操作数组
**/
#include <stdio.h>

int main(void){

    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p;

    p = a;  // 指针指向数组

    for(int i=0; i < 10; i++){
        printf("a[%d] = %d\n", i, (*p)+i);
    }

    getchar();
    return 0;
}
