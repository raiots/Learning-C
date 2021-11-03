/*****************************************************************************
File name: HW4-1.c
Description: 输入一串字符，将以倒序输出
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW4
Author: Raiot.Me
Date: 2021-11-3
*****************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, temp;
    char a[128];
    printf("Please input an array of characters, and will print in descending\
    order: ");
    scanf("%s", a);

    for (i = 0; i < strlen(a); i++){
        for(j = 0; j < strlen(a) - i - 1; j++){
            if (a[j] < a[j + 1]){
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }

        }
    }
    printf("Descending order: ");
    for (i = 0; i < strlen(a); i++){
        printf("%c", a[i]);
    }

    return 0;
}