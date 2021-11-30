/*****************************************************************************
File name: HW9-1.c
Description: 实现三个函数，分别使用冒泡、选择、插入方法用指针对数组排序
Permalink: https: //github.com/raiots/Learning-C/tree/main/Homeworks/HW9
Author: Raiot.Me
Date: 2021-11-29
*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(double *x, double *y){
    double temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(double *a, int n)
{
    double *pa = a, *pi;
//    printf("%f", *a);
    for (pa = a+n; pa > a; pa--){
        for (pi = a; pi < pa-1; pi++){
            // printf("%f", *pi);
            if (*pi > *(pi+1)){
                swap(pi, pi+1);
            }
        }
    }
}

void selectionSort(double *a, int n)
{
    double *pa =a, *pi;
    for (pa = a; pa < a + n; pa++){
        for (pi = pa; pi < a + n; pi++){
            if (*pa > *pi){
                swap(pa, pi);
            }
        }
    }
}

void insertionSort(double *a, int n)
{
    double *pa = a, *pi, temp;
    for (pa = a + 1; pa < a + n; pa++){

        // 使用while似乎会更简单，缺点是会破坏稳定性
//        while (*(pa-1) > *pa && pa > a){
//            swap(pa, pa-1);
//            pa--;
//        }

        temp = *pa;
        for (pi = pa - 1; pi >= a; pi--){
            if (temp < *pi){
                *(pi+1) = *pi;
            }
            else{
                break;
            }
        }
        *(pi+1) = temp;
    }
}

void printArray(double *a, int n)
{
    printf("{");
    for (int i =0; i < n; i++){
        printf("%.1f, ", a[i]);
    }
    printf("}\n");
}

int main()
{
    int i, num;
    double a[8];
    srand(time(NULL));
    for (i = 0; i < sizeof(a)/sizeof(double); i++){
        a[i] = rand()%11;
    }
    num = sizeof(a)/sizeof(double);

    printf("==========================================================\n");
    printf("If you want to appoint the sort method by yourself, please edit the source code below.\n");
    printf("==========================================================\n");

    printf("The original array: ");
    printArray(a, num);

    bubbleSort(a,num);
    printf("After bubble sort: ");
    printArray(a, num);

    selectionSort(a, num);
    printf("After selection sort: ");
    printArray(a, num);

    insertionSort(a, num);
    printf("After insertion sort: ");
    printArray(a, num);

    return 0;
}
