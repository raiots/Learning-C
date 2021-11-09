/*****************************************************************************
File name: HW5-2.c
Description: 实现一个函数，可转置字符串
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW5
Author: Raiot.Me
Date: 2021-11-9
*****************************************************************************/

#include <stdio.h>
#include <string.h>

void strReverse(char str[]);

int main()
{
    char istr[128];
    printf("Please input the string that you want to reverse(NO SPACE!): \n");
    scanf("%s", istr);
    strReverse(istr); //这里的istr是实参
    printf("%s", istr);

    return 0;
}


//这里的str是形参，且由于传入数组地址，istr将随str改变而改变
void strReverse(char str[]){
    int i = 0;
    char temp;
    // 这里用了双指针（算是吧）
    if (i < strlen(str) - i - 1){
        for (i = 0; i < strlen(str) - i - 1; i++){
            temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
    // str[0] = 'o';
    
    // printf("%s", str);
}