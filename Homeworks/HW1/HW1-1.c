/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    float alpha;
    scanf("%d%d%f",&a, &b, &alpha);
    printf("%d %d %f\n", a, b, alpha);
    printf("The area of this triangle is: %f\n", a*b*sin(alpha*asin(1)*2/180));
    printf("The perameter of is: %f", a+b+a*sin(alpha*asin(1)*2/180));
}
