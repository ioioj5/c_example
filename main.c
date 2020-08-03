#include <stdio.h>

int bubble(int *a, int len);
int selection(int *a, int len);
int fibonacci();

int main() {
    int a[] = {2, 6, 1, 0, 8, 5, 7, 4, 3};
    int len = sizeof(a)/sizeof(int);


    printf("# Bubble Sort \n");
    bubble(a, len);

    // 注意要把数组顺序打乱...

    printf("# Selection Sort \n");
    selection(a, len);

    printf("# Fibonacci sequence \n");
    fibonacci();
}
