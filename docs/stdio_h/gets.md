# gets
> https://www.runoob.com/cprogramming/c-function-gets.html

## 描述
C 库函数 char *gets(char *str) 从标准输入 stdin 读取一行，并把它存储在 str 所指向的字符串中。当读取到换行符时，或者到达文件末尾时，它会停止，具体视情况而定。

## 声明
```c
char *gets(char *str)
```

## 参数
- str -- 这是指向一个字符数组的指针，该数组存储了 C 字符串。

## 返回值
如果成功，该函数返回 str。如果发生错误或者到达文件末尾时还未读取任何字符，则返回 NULL。

## 实例
```c
#include <stdio.h>

int main()
{
   char str[50];

   printf("请输入一个字符串：");
   gets(str);

   printf("您输入的字符串是：%s", str);

   return(0);
}
```
```c
请输入一个字符串：runoob
您输入的字符串是：runoob
```

