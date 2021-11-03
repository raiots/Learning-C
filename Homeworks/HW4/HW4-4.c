/*****************************************************************************
File name: HW4-4.c
Description: 创建一个指定行数的杨辉三角形
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW4
Author: Raiot.Me
Date: 2021-11-3
*****************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a[10][10];
    int i, j, templ, tempu, num;
    
    printf("How many rows of Yanhui's triangle do you want to see?[1, 10]: ");
    scanf("%d", &num);
    for (i=0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if(i < num && j < num - i){
                // 发现一个整数+一个‘0’的字符可以得到该整数的字符值，要转字符串\
                可以用itoa
                /* 整了好久，之前想定义字符类型数组以此设定数组中“空”的部分，为\
                此各种整数转字符，后来发现种种bug（一旦有值超过9就出现乱码），
                最后才发现可以在打印矩阵的时候设定遇到0不打印*/
                if(i == 0 || j == 0){
                    a[i][j] = 1;
                }
                else{
                    // if (){
                    //     templ = a[i][j - 1] - '0';
                    //     tempu = a[i - 1][j] - '0';
                    // }
                    // templ = atoi(a[i][j - 1]);
                    // tempu = atoi(a[i - 1][j]);
                    a[i][j] = a[i][j - 1] + a[i - 1][j];
                    
                }
                
            }
            else{
                a[i][j] = 0;
            }
        }
        // printf("%d", i);
        
    }
    
    // print matrix
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if(a[i][j] == 0){
                // printf(" ");
            }
            else{
                printf("%4d", a[i][j]);
            }
        }
        printf("\n");
    }    
    return 0;
}