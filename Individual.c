#include "head.h"

void individual(STU_grade array[] ,int ID){

    int Aver;

    Aver = (array[ID-1].Math+array[ID-1].English+array[ID-1].Science)/3;//this Aver is for individual
    printf("\nID: %d ---Average: %d\n",ID,Aver);
}

