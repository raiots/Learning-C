/*****************************************************************************
File name: HW1-1.c
Description: 通过a, b, alpha计算三角形的面积和周长
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW1
Author: Raiot.Me
Date: 2021-9-27
*****************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    float alpha;
    printf("Please input integers a b and float alpha: ");
    scanf("%d%d%f",&a, &b, &alpha);
    printf("The area of this triangle is: %f\n", \
        a * b * sin(alpha * asin(1) * 2/180) / 2);
    printf("The perameter of this triangle is: %f", \
        a + b + sqrt(pow(a, 2) + pow(b, 2) + \
        2 * a * b * cos(alpha*asin(1)*2/180)));
    
    return 0;
}