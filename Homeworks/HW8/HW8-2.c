/*****************************************************************************
File name: HW8-2.c
Description: 实现一个函数，通过指针返回给定数组的平均数、标准差、中位数
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW8
Author: Raiot.Me
Date: 2021-11-22
*****************************************************************************/

#include <stdio.h>
#include <math.h>

void stat(int x[], int n, double *mean, double *std, double *median){
    int i, j, temp;
    // 计算平均数
    for (i = 0; i < n; i++){
        *mean += x[i];
    }
    *mean = *mean / n;
//    printf("%f\n", *mean);

    // 计算标准差
    for (i = 0; i < n; i++){
        *std += pow((x[i] - *mean), 2);
//        printf("%f ", *std);
    }
    *std = sqrt(*std/n);
//    printf("%f", *std);

    // 计算中位数,先用冒泡排序
    for (i=n; i>0; i--){
        for (j=0; j<i; j++){
            if (x[j] > x[j+1]){
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }

    if (n%2 == 0){
        *median = (x[n/2] + x[n/2 + 1]) / 2.0;
    }
    else *median = x[n/2 + 1];
//    printf("\n%d\n", n/2);
}

int main()
{
    int x[] ={2,5,8,4,3};
    double mn=0, sd=0, md=0;
    stat(x, sizeof(x)/sizeof(int), &mn, &sd, &md);
    printf("The array is {2,5,8,4,3}\n");
    printf("The mean, the standard deviation and the median of the array is: %f, %f, %0.f", mn, sd, md);
    return 0;
}