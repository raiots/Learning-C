/*****************************************************************************
File name: HW4-2.c
Description: 创建一个5x5的随机矩阵（值在0～100），并求其上三角的和
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW4
Author: Raiot.Me
Date: 2021-11-3
*****************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[5][5];
    int i, j, sum;
    srand(time(NULL));
    printf("Generated the random matrix:\n");
    
    // give matrix random value
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            a[i][j] = rand()%101;
            // a[i][j] = 2; // vertify sum value
        }
    }
    
    // compute sum of the upper triangle matrix
    for (i = 0; i < 5; i++){
        for (j = i; j < 5; j++){
            sum += a[i][j];
        }
    }
    
    // print matrix
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the upper triangle matrix is: %d", sum);
    return 0;
}