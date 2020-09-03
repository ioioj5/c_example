#include <stdio.h>
// 求整数200~500间能被3整除的整数之和
int t02() {
    int sum=0,i;
    for(i=201;i<=500;i+=3)
        sum+=i;
    printf("整数200`500间能被3整除的整数之和为%d\n",sum);
    return 0;
}