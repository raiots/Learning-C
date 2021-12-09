/*****************************************************************************
File name: HW10-3.c
Description: 利用指针,返回矩阵的和、平均值，最小值，最大值
Permalink: https: //github.com/raiots/Learning-C/tree/main/Homeworks/HW10
Author: Raiot.Me
Date: 2021-12-9
*****************************************************************************/

#include <stdio.h>

void statMatrix (double a[][3], int m, int n, double *sum, double *avg, double *min, double *max)
{
    int i, j;
    double temp;

    *min = a[0][0];
    *max = a[0][0];
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            *sum += a[i][j];
            if (a[i][j]<*min)
                *min = a[i][j];
            else if (a[i][j]>*max)
                *max = a[i][j];
        }
    }

//    for (i=m*n-1; i>0; i--){
//        for (j=0; j<i; j++){
//            if (**(a+j) > **(a+j+1))
//            {
//                printf("%.1f!", **(a+j+1));
//                temp = **(a+j);
//                **(a+j) = **(a+j+1);
//                **(a+j) = temp;
//            }
//        }
//    }
    *avg = *sum/(m*n);
}

void printMatrix(double a[][3], int m, int n)
{
    int i, j;
    double temp;
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf("%.1f ", *(*(a+i)+j));
        }
        printf("\n");
    }
}

int main ()
{
    int m=3, n=3;
    double a[3][3] = {{1,2,3},{4,5,6},{0.1,8,9}};
    double sum=0, avg=0, min, max;
    printf("Given Matrix:\n");
    printMatrix(a, m, n);
    statMatrix(a, m, n, &sum, &avg, &min, &max);
//    printMatrix(a, m, n);
    printf("Sum: %.1f Avg: %f Min: %.1f Max %.1f", sum, avg, min, max);

    return 0;
}