/*****************************************************************************
File name: HW3-1.c
Description: 打印一个高度为七行的“钻石”形
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW3
Author: Raiot.Me
Date: 2021-10-27
*****************************************************************************/

#include <stdio.h>

int main()
{
    for(int i = 1; i <= 7; i++){
        if(i <= 4 ){
            for(int j = 1; j <= (4 - i); j++){
                printf(" ");
            }
            for(int j = 1; j <= 2 * i-1; j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(int j = 1; j <= i - 4; j++){
                printf(" ");
            }
            for(int j = 1; j <= 2*(7 - i) + 1; j++){
                printf("*");
            }
            printf("\n");
        }
    }
}