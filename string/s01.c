#include <stdio.h>
#include <limits.h>
int s01() {
    char grade = 'A';
    int a = 'A';
    a ++;
    grade++;
    printf("%d -> %c sizeof: %d\n", grade, grade, sizeof(grade));
    printf("%d -> %c \n", a, a);
    return 0;
}