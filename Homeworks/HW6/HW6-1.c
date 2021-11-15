/*****************************************************************************
File name: HW6-1.c
Description: 实现一个函数，可将给定矩阵转置
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW6
Author: Raiot.Me
Date: 2021-11-15
*****************************************************************************/

#include <stdio.h>

void transpose(double mattr[3][3]){
    int i, j, temp;
    for (i=0; i<3; i++){
        for (j=0; j<i; j++){
            temp = mattr[i][j];
            mattr[i][j] = mattr[j][i];
            mattr[j][i] = temp;
            // printf("%0.f",mattr[i][j]);
        }
    }
}

void PrintMatrix(double mattr[3][3]){
    int i, j;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%0.f ",mattr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i, j;
    double mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    printf("Original matrix:\n");
    PrintMatrix(mat);
    
    transpose(mat);
    printf("After transpose:\n");
    PrintMatrix(mat);    
    return 0;
}
