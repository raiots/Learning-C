/*****************************************************************************
File name: HW5-1.c
Description: 实现一个函数，可打印一个指定行数的等腰三角形
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW5
Author: Raiot.Me
Date: 2021-11-9
*****************************************************************************/

#include <stdio.h>

void draw(int rows);
int main()
{
    int num;
    printf("Please input the rows of triangle:\n");
    scanf("%d", &num);
    draw(num);

    return 0;
}

void draw(int rows){
    int i, j;
    // printf("%d", rows);
    for (i=1; i <= rows; i++){
        // printf("%d\n", i);
        for (j = rows - 1; j >= i; j--){
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    
}