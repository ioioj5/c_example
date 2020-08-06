#include <stdio.h>

int a01() {
    int area[] = {10, 12, 13, 14, 20};

    printf("The size of int: %d\n", sizeof(int));
    printf("The size of area: %d\n", sizeof(area));
    printf("The number of ints in area: %d\n", sizeof(area) / sizeof(int));
    return 0;
}