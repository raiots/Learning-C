/*****************************************************************************
File name: HW1-2.c
Description: 判断输入的数字是否能被3、5、7整除
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW1
Author: Raiot.Me
Date: 2021-9-27
*****************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    printf("Please input the number:");
    scanf("%d", &x);
    
    if(x % 3 == 0 && x % 5 == 0 && x % 7 == 0){
        printf("Can be devided by 3, 5, 7 at the same time.");
    }
    else if(x % 3 == 0 && x % 5 == 0){
        printf("Can be devided by 3, 5 at the same time.");
    }
    else if(x % 5 == 0 && x % 7 == 0){
        printf("Can be devided by 5, 7 at the same time.");
    }
    else if(x % 3 == 0 && x % 7 == 0){
        printf("Can be devided by 3, 7 at the same time.");
    }    
    else if(x % 3 == 0){
        printf("Can be only devided by 3.");
    }
    else if(x % 5 == 0){
        printf("Can be only devided by 5.");
    }
    else if(x % 7 == 0){
        printf("Can be only devided by 7.");
    }
    else{
        printf("Can not be devided by 3, 5, 7.");
    }  
    
    return 0;  
}
