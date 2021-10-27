/*****************************************************************************
File name: HW3-3.c
Description: 拼接两个字符串
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW3
Author: Raiot.Me
Date: 2021-10-27
*****************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[128] = "abc";
    char s2[64];
    int s1_len;
    printf("Please input the first string: ");
    scanf("%s", s1);
    printf("Please input the second string: ");
    scanf("%s", s2);
    s1_len = strlen(s1);
    for(int i = 0; i <= strlen(s2) - 1; i++){
        // 犯了个低级错误，s1的长度应该在for循环外面给定，不然每次都加一。
        // ps. 用strcat更方便。
        
        // s1[strlen(s1) + i] = s2[i];
        s1[s1_len + i] = s2[i];
        // printf("%d %d\n", s1[3 + i], s2[i]);
    }
    printf("%s", s1);
}