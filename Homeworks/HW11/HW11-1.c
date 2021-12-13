/*****************************************************************************
File name: HW11-1.c
Description: 读取文件中5x5数组，将其转置后输出到另一文件
Permalink: https: //github.com/raiots/Learning-C/tree/main/Homeworks/HW11
Author: Raiot.Me
Date: 2021-12-13
*****************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, temp;
    int a[5][5];
    FILE *fpIn = fopen("aMat.txt", "r");
    FILE *fpOut = fopen("bMat.txt", "w");
    if(!fpIn){
        printf("No such file.");
    }
    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            fscanf(fpIn, "%d", &a[i][j]);
        }
    }

    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("\n");

    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            fprintf(fpOut, "%d ", a[i][j]);
        }
        fprintf(fpOut, "\n");
    }

    return 0;
}