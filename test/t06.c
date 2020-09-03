#include <stdio.h>
int t06() {
    int input;
    scanf("%d", &input);

    if (input % 5 == 0 && input % 7 == 0) {
        printf("yes");
    }else {
        printf("no");
    }
    return 0;
}