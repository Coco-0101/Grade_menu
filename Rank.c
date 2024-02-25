#include "head.h"

void rank(STU_grade array[],char subject,char HorL)
{
    int highest, lowest,id;
    int operand[num_of_STU];
    float Avg[4] ;
    char subject_name[100];

    id=1;
    highest = operand[1];
    lowest = operand[1];
    for(int i=0; i<num_of_STU; i++)             //individual highest
    {
        switch(subject)
        {
        case 'M':
            operand[i]=array[i].Math;
            break;
        case 'E':
            operand[i]=array[i].English;
            break;
        case 'S':
            operand[i]=array[i].Science;
            break;
        case 'T':
            operand[i]=(array[i].Math+array[i].English+array[i].Science)/3;
            break;
        }
        if (HorL == 'H')
            if (operand[i] > highest)
            {
                highest = operand[i];
                id = i+1;
            }
        if (HorL == 'L')
            if (operand[i] < lowest)
            {
                lowest = operand[i];
                id = i+1;
            }
    }
    if (HorL == 'H')
        printf("Subject:%c   Highest : %d   ID: %d\n",subject,highest,id);
    else if (HorL == 'L')
        printf("Subject:%c   lowest  : %d   ID: %d\n",subject,lowest,id);

}
