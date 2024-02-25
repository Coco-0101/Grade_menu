#include "head.h"

void Class_avg_and_SD(STU_grade grade[num_of_STU],float Avg[]){

    printf("\n======================================================================\n");
    printf("             |     Math    |   English   |   Science   |     Total   |");
    printf("\n======================================================================\n");
    printf("  Average    |");

    //Avg[ ] for calculating SD
    Avg[1]=cal_Avg(grade,1,-1); //no ID would be -1
    Avg[2]=cal_Avg(grade,2,-1);
    Avg[3]=cal_Avg(grade,3,-1);
    Avg[0]=cal_Avg(grade,4,-1);
    printf("\n----------------------------------------------------------------------\n");
    printf("  Standard   |\n");
    printf("  Deviation  |");
    cal_SD(grade,1,Avg[1]);
    cal_SD(grade,2,Avg[2]);
    cal_SD(grade,3,Avg[3]);
    cal_SD(grade,4,Avg[0]);
    printf("\n----------------------------------------------------------------------\n");

}
