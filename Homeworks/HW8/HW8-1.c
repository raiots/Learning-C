/*****************************************************************************
File name:  HW8-1.c
Description:  实现一个函数，使用递归检测字符串是否为回文
Permalink:  https: //github.com/raiots/Learning-C/tree/main/Homeworks/HW8
Author:  Raiot.Me
Date:  2021-11-22
*****************************************************************************/

#include <stdio.h>

int main()
{
    char c = 'c';
    short s = 1;
    int i = 10;
    long l = 100;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pl = &l;

    *pc = 'd';
    *ps = 2;
    *pi = 11;
    *pl = 101;
    printf("字符变量的值: %c，大小: %d，地址: %x\n", c, sizeof(c), &c);
    printf("字符变量指针的大小: %d，值: %x，解引用: %d\n", sizeof(pc), pc, *pc);
    printf("短整型变量的值: %d，大小:  %d，地址: %x\n", s, sizeof(s), &s);
    printf("短整型变量指针的大小: %d，值: %x，解引用: %d\n", sizeof(ps), ps, *ps);
    printf("整型变量的值: %d，大小: %d，地址: %x\n", i, sizeof(i), &i);
    printf("整型变量指针的大小: %d，值: %x，解引用: %d\n", sizeof(pi), pi, *pi);
    printf("长整型变量的值: %ld，大小: %d，地址: %x\n", l, sizeof(l), &l);
    printf("长整型变量指针的大小: %d，值: %x，解引用: %ld\n", sizeof(pl), pl, *pl);
    return 0;
}