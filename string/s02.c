#include <stdio.h>
#include <string.h>

int s02() {
    char a[8] = "abc", b[] = "abcdefg";
    char c[8];

    strcpy(c, a);

    printf("c: %s\n", c);
    return 0;
}