/*****************************************************************************
File name: HW11-2.c
Description: 读取文件中学生信息，存于结构体并打印
Permalink: https: //github.com/raiots/Learning-C/tree/main/Homeworks/HW11
Author: Raiot.Me
Date: 2021-12-13
*****************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    FILE *fpIn = fopen("a.txt", "r");
    if(!fpIn){
        printf("No such file, please create a text file with student data named 'a.txt' ");
    }
    typedef struct{
        int id;
        char name[32];
        char gender;
        char major[32];
        double gpa;
    }Student;

    Student stut[5];

    for (i=0; i<5; i++){
        fscanf(fpIn, "%d %s %c %s %lf", &stut[i].id, stut[i].name, &stut[i].gender, stut[i].major, &stut[i].gpa);
    }

//    printf("%s", stut[1].name);
    for (i=0; i<5; i++){
        printf("ID: %d Name: %s Gender: %c Major: %s GPA: %lf\n", stut[i].id, stut[i].name, stut[i].gender, stut[i].major, stut[i].gpa);
    }

    return 0;
}