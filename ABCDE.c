#include "head.h"

void abcde(STU_grade array[],int subject)
{
    int operand[num_of_STU];
    printf("\n");
    for (int i=0; i<num_of_STU; i++)
    {
            switch(subject)
            {
                case 1:
                    operand[i]=array[i].Math;
                    break;
                case 2:
                    operand[i]=array[i].English;
                    break;
                case 3:
                    operand[i]=array[i].Science;
                    break;
                case 4:
                    operand[i]=(array[i].Math+array[i].English+array[i].Science)/3;
                    break;
            }

            if  (operand[i]>=90)
            {
                printf("ID : %d --- A (Scores:%d) ",i+1,operand[i]);
            }
            else if  (operand[i]<90 && operand[i]>=80)
            {
                printf("ID : %d --- B (Scores:%d)",i+1,operand[i]);
            }
            else if  (operand[i]<80 && operand[i]>=70)
            {
                printf("ID : %d --- C (Scores:%d)",i+1,operand[i]);
            }
            else if  (operand[i]<70 && operand[i]>=60)
            {
                printf("ID : %d --- D (Scores:%d)",i+1,operand[i]);
            }
            else if  (operand[i]<60)
            {
                printf("ID : %d --- E (Scores:%d)",i+1,operand[i]);
            }
            printf("\n");
    }
}

