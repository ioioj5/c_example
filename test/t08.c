#include <stdio.h>
int t08(){
    int x, y;
    printf("Please input a integer number:");
    scanf("%d", &x);

    int v;
    if (x > 0) {
        v = 1;
    }else if(x == 0) {
        v = 0;
    }else if(x < 0) {
        v = -1;
    }
    switch (v) {
        case 0:
            y = 0;
            break;
        case 1:
            y = 1;
            break;
        case -1:
            y = -1;
            break;
    }
    printf("y = %d\n", y);
    return 0;
}