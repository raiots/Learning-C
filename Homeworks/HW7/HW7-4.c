/*****************************************************************************
File name: HW7-4.c
Description: 实现一个函数，使用递归检测字符串是否为回文
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW7
Author: Raiot.Me
Date: 2021-11-20
*****************************************************************************/

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int s, int e){
    if (s>e){
        return 1;
    }
    else{
        if (str[s] == str[e]){
            return isPalindrome(str, s+1, e-1); // 这个地方用s++不行
        }
        else return 0;
    }
}

int main()
{
    char str[] = "asdfdsaa";
    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("是回文字符串！");
    else
        printf("不是回文字符串！");
    return 0;
}