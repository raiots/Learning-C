/*****************************************************************************
File name: HW7-2.c
Description: 实现一个函数，使用递归计算数组之和
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW7
Author: Raiot.Me
Date: 2021-11-20
*****************************************************************************/

#include <stdio.h>

long CalFactorial(int n){
    int tempF;
    if (n == 1){
        return 1;
    }
    tempF = CalFactorial(n-1);
    return n * tempF;
}

int main()
{
    int num;
    num = 3;
    printf("Please input a number and I will show you the factorial of it: ");
    scanf("%d", &num);
    printf("The factorial of %d is %ld", num, CalFactorial(num));

    return 0;
}