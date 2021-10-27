/*****************************************************************************
File name: HW3-2.c
Description: 计数一个字符串内大写字母、小写字母、数字的数量
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW3
Author: Raiot.Me
Date: 2021-10-27
*****************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int numL = 0, numU = 0, numN = 0;
    char s[128];
    printf("Please input a string with chars and nums: ");
    scanf("%s", s);
    for(int i = 0; i <= strlen(s); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            numL++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            numU++;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            numN++;
        }
    }
    printf("%d %d %d", numL, numU, numN);
}