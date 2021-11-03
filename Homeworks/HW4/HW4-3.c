/*****************************************************************************
File name: HW4-3.c
Description: 创建一个4x5的随机浮点矩阵（值在0～10），并求其边缘的积
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
    float a[4][5];
    int i, j;
    // 之前忘记给product赋初始值了，导致累乘始终得0
    float product = 1;
    srand(time(NULL));
    
    // give random number to matrix
    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            a[i][j] = rand()%11;
        }
    }
    
    // calculate product
    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            if (i == 0 || i == 3 || j == 0 || j == 4){
                product *= a[i][j];
            }
        }
    }
    
    // print matrix
    printf("Generated the random matrix:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }
    printf("The product of peripheral elements is: %f", product);
    return 0;
}