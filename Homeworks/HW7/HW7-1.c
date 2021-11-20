/*****************************************************************************
File name: HW7-1.c
Description: 实现一个函数，使用递归计算数组之和
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW7
Author: Raiot.Me
Date: 2021-11-20
*****************************************************************************/

#include <stdio.h>

int arrSum(int a[], int n){
    int tempSum;
    if (n == 1){
        return a[0];
    }
    tempSum = arrSum(a, n-1);
    return a[n-1] + tempSum;
}
int main()
{
    int x[] = {2,4,1,5,7,1};
    printf("%d",arrSum(x, sizeof(x)/sizeof(int)));

    return 0;
}