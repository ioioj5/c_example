#include <stdio.h>
// 求整数200~500间能被3整除的整数之和
int t02() {
    int start = 200;
    int end = 500;
    int sum = 0;

    for(int i = start; i <= end; i ++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    printf("sum: %d\n", sum);
    return 0;
}