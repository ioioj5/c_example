#include <stdio.h>

int main(){
    int a = 10, b = 20, *p;
    p = &a;
    
    int *temp = &a;

    printf("%d", *temp);
    return 0;
}
