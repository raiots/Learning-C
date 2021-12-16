/*****************************************************************************
File name: HW11-3.c
Description: 读取文件中学生信息，计算GPA平均值，并以降序存于另一文件
Permalink: https://github.com/raiots/Learning-C/tree/main/Homeworks/HW11
Author: Raiot.Me
Date: 2021-12-13
*****************************************************************************/

#include <stdio.h>

int main()
{
    int i=0, j;
    double sum = 0;
    FILE *fpIn = fopen("a.txt", "r");
    FILE *fpOut = fopen("a-des.txt", "w");
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

//    for (i=0; i<5; i++){
    while (!feof(fpIn)){
        fscanf(fpIn, "%d %s %c %s %lf", &stut[i].id, stut[i].name, &stut[i].gender, stut[i].major, &stut[i].gpa);
        i++;
    }

//    printf("%s", stut[1].name);
    printf("Original data:\n");
    for (i=0; i<5; i++){
        printf("ID: %d Name: %s Gender: %c Major: %s GPA: %lf\n", stut[i].id, stut[i].name, stut[i].gender, stut[i].major, stut[i].gpa);
        sum += stut[i].gpa;
    }
    printf("\nAverage GPA: %f\n\n", sum);

    Student temp;
    // 使用冒泡降序排列
    for (i=5; i>0; i--){
        for (j=0; j<i; j++){
            if (stut[j].gpa<stut[j+1].gpa){
                temp = stut[j];
                stut[j] = stut[j+1];
                stut[j+1] = temp;

            }
        }
    }

    printf("In descending order(Also saved to a-des.txt at the same time): \n");
    for (i=0; i<5; i++){
        printf("ID: %d Name: %s Gender: %c Major: %s GPA: %lf\n", stut[i].id, stut[i].name, stut[i].gender, stut[i].major, stut[i].gpa);
        fprintf(fpOut, "ID: %d Name: %s Gender: %c Major: %s GPA: %lf\n", stut[i].id, stut[i].name, stut[i].gender, stut[i].major, stut[i].gpa);
    }
    fclose(fpIn);
    fclose(fpOut);

    return 0;
}
