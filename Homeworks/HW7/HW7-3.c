/*****************************************************************************
File name: HW7-3.c
Description: 实现一个函数，使用递归统计字符串中小写字母、大写字母、数字个数
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW7
Author: Raiot.Me
Date: 2021-11-20
*****************************************************************************/

#include <stdio.h>
#include <string.h>

void charCount(char a[], int len, int result[]){
//    printf("%s", a);
    if (len == 0){
        return;
    }
    else{
        if (a[len-1] >= 'a' && a[len-1] <= 'z')
            result[0] ++;
        else if (a[len-1] >= 'A' && a[len-1] <= 'Z')
            result[1] ++;
        else if (a[len-1] >= '0' && a[len-1] <= 'z')
            result[2] ++;
        return charCount(a, len-1, result);
    }
}

int main()
{
    char x[] = "adsd123ASD";
    int result[3] = {0,0,0};
    charCount(x, strlen(x), result);
    printf("%d %d %d", result[0], result[1], result[2]);
    // printf("%d %d %d",charCount(x, result));

    return 0;
}