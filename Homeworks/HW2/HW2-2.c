/*****************************************************************************
File name: HW2-2.c
Description: 输入一个字母，将输出其大写/小写字母,并循环，直到输入0。
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW2
Author: Raiot.Me
Date: 2021-10-9
*****************************************************************************/

#include <stdio.h>

int main()
{
    char a;
    printf("Input a character and will print another case(upper or lower),enter\
    0 to exit.\n");
    while(a != '0'){
        scanf("%c", &a);
        if(a >= 'a' && a <= 'z'){
            a -= 32;
            printf("%c\n", a);
        }
        else if(a >= 'A' && a <= 'Z'){
            a += 32;
            printf("%c\n", a);
        }
    }
    return 0;
}