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
    float a, b, c;
    printf("Please input three side length, like '3.2 4.1 5':\n");
    scanf("%f %f %f", &a, &b, &c);
    // Must run thhis at first.
    if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
        if(a==b || b==c || a==c){
            printf("This is an isosceles right triangle.");
        }
        else{
            printf("This is a right triangle.");
        }
    }
    else if(a==b || b==c || a==c){
        if(a == b == c){
            printf("This is an equilateral triangle.");
        }
        else{
            printf("This is an isosceles.");
        }
    }
    else{
        printf("Just a triangle, nothing special.");
    }
    return 0;
}