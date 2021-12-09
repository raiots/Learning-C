/*****************************************************************************
File name: HW10-2.c
Description: 利用指针,转置二维矩阵
Permalink: https: //github.com/raiots/Learning-C/tree/main/Homeworks/HW10
Author: Raiot.Me
Date: 2021-12-9
*****************************************************************************/

#include <stdio.h>

void transpose (double a[][3], int m, int n)
{
    int i, j;
    double temp;
    for (i=0; i<m; i++){
        for (j=i; j<m; j++){
//            printf("%.1f ", *(*(a+i)+j));
            temp = *(*(a+i)+j);
            *(*(a+i)+j) = *(*(a+j)+i);
            *(*(a+j)+i) = temp;
        }
    }
}

void printMatrix(double a[][3], int m, int n)
{
    int i, j;
    double temp;
    for (i=0; i<m; i++){
        for (j=0; j<m; j++){
            printf("%.1f ", *(*(a+i)+j));
        }
        printf("\n");
    }
}

int main ()
{
    int m=3, n=3;
    double a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Origin Matrix:\n");
    printMatrix(a, m, n);
    transpose(a, m, n);
    printf("After transpose:\n");
    printMatrix(a, m, n);

    return 0;
}