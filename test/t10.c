#include <stdio.h>
int t10(){
    int a[] = {2, 4, 6, 8, 10, 12};
    int *p;
    p = a;

    printf("%d", *(p+5));
    return 0;
}

