/*****************************************************************************
File name: HW6-3.c
Description: 实现一个函数，可计算给定数组的最大、小值，和，平均值
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW6
Author: Raiot.Me
Date: 2021-11-15
*****************************************************************************/

#include <stdio.h>

void Stat(int arr[], double ret[4], int num){
    int i, j, temp;
    
    // 冒泡算法，获得最大、小值
    for (i=num; i>0; i--){
        for (j=0; j < i - 1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    ret[0] = arr[0];
    ret[1] = arr[num - 1];
    
    // 计算数组和（ret[2]）、数组平均数（ret[3]）
    for (i=0; i<num; i++){
        ret[2] += arr[i];
    }
    ret[3] = 1.0*ret[2] / num;
}

int main()
{
    int arro[128] = {6,5,4,3,2,1,0,2,3,5};
    double result[4] = {0,0,0,0};
    int num = 10, i=0;
    
    
    Stat(arro, result, num);
    // for (i=0; i<4; i++){
    //     printf("%d ", result[i]);
    // }
    printf("The array: {6,5,4,3,2,1,0,2,3,4}\n");
    printf("Max: %0.f, Min: %0.f, Sum: %0.f, Average: %f", result[0], result[1], result[2], result[3]);
    return 0;
}