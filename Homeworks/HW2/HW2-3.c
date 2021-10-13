/*****************************************************************************
File name: HW2-3.c
Description: 输入三角形三边，确定如等边、等腰、直角、等腰直角及其他三角形。
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW2
Author: Raiot.Me
Date: 2021-10-13
*****************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Please input three side length, like '3 4 5':\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b || b==c || a==c){
        if(a == b == c){
            printf("This is an equilateral triangle.");
        }
        else{
            printf("This is an isosceles.");
        }
    }
    else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
        if(a==b || b==c || a==c){
            printf("This is an isosceles right triangle.");
        }
        else{
            printf("This is a right triangle.");
        }
    }
    else{
        printf("Just a triangle, nothing special.");
    }
    return 0;
}