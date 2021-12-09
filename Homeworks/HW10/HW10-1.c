/*****************************************************************************
File name: HW10-1.c
Description: 利用指针函数，对字符串数组排序
Permalink: https: //github.com/raiots/Learning-C/tree/main/Homeworks/HW10
Author: Raiot.Me
Date: 2021-12-8
*****************************************************************************/

#include <stdio.h>
#include <string.h>

int isLower(char *str1, char *str2)
{
    return strcmp(str1, str2) < 0;
}

int isLarger(char *str1, char *str2)
{
    return strcmp(str1, str2) > 0;
}

void stringSort(char *str[], int n, int (*compare)(char*, char*))
{
    int i, j;
    char *temp;
    for (i=n-1; i>0; i--){
        for (j=0; j<i; j++){
            if (compare(str[j], str[j+1])){
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}

void printArray(char *str[], int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("%s ", str[i]);
    printf("\n");
}

int main()
{
    char *str[3];
    str[0] = "dog";
    str[1] = "cat";
    str[2] = "mouse";

    printf("Before sort:\n");
    printArray(str, 3);
    stringSort(str, 3, isLower); // Using isLager as argument to get ascending sort.
    printf("After descending sort (Change argument above to apply ascending sort):\n");
    printArray(str, 3);

    return 0;
}