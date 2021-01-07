#include <stdio.h>
int t09(){
    int score;
    printf("Please input a score:");
    scanf("%d", &score);

    if (score > 100 || score < 0) {
        printf("Input Error");
        return 1;
    }
    switch (score / 10) {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("E");

    }
    return 0;
}