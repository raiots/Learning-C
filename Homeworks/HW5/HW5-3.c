/*****************************************************************************
File name: HW5-3.c
Description: 实现一个函数，可验证输入字符串是否为回文字符串
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW5
Author: Raiot.Me
Date: 2021-11-9
*****************************************************************************/

#include <stdio.h>
#include <string.h>

int CheckPalindrome(char str[]);

int main()
{
    char istr[128];
    printf("Please input a string, and I wil check whether it's Palindrome:\n");
    scanf("%s", istr);
    CheckPalindrome(istr);
    // printf("%d", CheckPalindrome(istr));
    if (CheckPalindrome(istr) == 1){
        printf("The string is palindrome!");
    }
    else if (CheckPalindrome(istr) == 0){
        printf("The string IS NOT palindrome!");
    }
    else {
        printf("Some bugs happened. Please report the issue on my github.");
    }

    return 0;
}

int CheckPalindrome(char str[]){
    int i = 0;
    // printf("%s", str);
    if (i < strlen(str) - i - 1){
        for (i = 0; i < strlen(str) - i - 1; i++){
            if (str[i] != str[strlen(str) - i - 1]){
                return 0;
            }
        }
    }
    return 1;
}
