#include <stdio.h>
#include <string.h>
int s01() {
    char a[8] = "abc", b[] = "abcdefg";

    int ret = strcmp(a, b);
    printf("ret = %d \n", ret);

    if (ret == 0) {
        printf("a = b");
    }else if (ret == -1) {
        printf("a < b");
    }else if (ret == 1) {
        printf("a > b");
    }
    return 0;
}