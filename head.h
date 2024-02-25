#ifndef Headers_H_INCLUDED
#define Headers_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#define num_of_STU 30

typedef struct studentGrade
{
    int ID;
    int Math;
    int English;
    int Science;

} STU_grade,*pgrade;


void ftypesetting(int fobject2set);

void generate_new_data(pgrade pg);
void PrintScore(STU_grade grade[num_of_STU],float Avg[]);
void print_grade(STU_grade Data);
void print_gradeArray(STU_grade array[]);
void typesetting(int object2set);
void individual(STU_grade array[], int ID);
void Class_avg_and_SD(STU_grade grade[num_of_STU],float Avg[]);
void abcde(STU_grade array[],int subject);
cal_Avg(STU_grade array[],int subject,int num);
void cal_SD(STU_grade array[],int subject,float avg);
pgrade writetxt(pgrade pg);
pgrade read_txt(pgrade pg);
void read_on_cmd();
#endif //Headers_H_INCLUDED
