/*****************************************************************************
File name: HW2-1.c
Description: 输入两个数字一个字符（逗号隔开）若字符为y则数字交换。
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW2
Author: Raiot.Me
Date: 2021-10-9
*****************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, temp;
    char c;
    printf("Please input like '1,2,y', if the last char is y, then swap:\n");
    scanf("%d,%d,%c", &a, &b, &c);
    // printf("Enter y to swap, others won't swap:");
    // scanf("%c\n", &c);

    if(c=='y')
    {
        temp = a;
        a = b;
        b = temp;
        printf("%d, %d", a, b);
    }
    else
    {
        printf("No Swap");
    }
    
    return 0;
}