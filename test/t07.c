#include <stdio.h>
#include <math.h>
int t07() {
    int a, b;
    printf("Please input a:");
    scanf("%d", &a);
    printf("Please input b:");
    scanf("%d", &b);

    int sum;
    sum = pow((double) a, 2) + pow((double) b, 2);
    if (sum > 100) {
        printf("%d", sum/100);
    }else {
        printf("%d", a+b);
    }
    return 0;
}

