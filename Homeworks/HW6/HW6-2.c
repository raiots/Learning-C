/*****************************************************************************
File name: HW6-2.c
Description: 实现一个函数，可计算输入字符串中小写字母、大写字母、数字个数
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW6
Author: Raiot.Me
Date: 2021-11-15
*****************************************************************************/

#include <stdio.h>
#include <string.h>

void Count(char str[], int ret[3]){
    int i, num;
    // printf("%s\n", str);
    num = strlen(str);
    // printf("%d", num);
    for (i = 0; i < num; i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            ret[0] ++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            ret[1] ++;
        }
        else if (str[i] >= '0' && str[i] <= '9'){
            ret[2] ++;
        }
        else{
        }
    }
}

int main()
{
    char str[64];
    printf("Please input a string, I will give you the number of lower cases...\n");
    scanf("%s", str);
    int result[3] = {0, 0, 0};
    Count(str, result);
    printf("The number of Lower cases: %d, Upper cases: %d, Numeric letters: %d"
    , result[0], result[1], result[2]);
    return 0;
}