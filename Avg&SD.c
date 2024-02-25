#include "head.h"

cal_Avg(pgrade array,int subject,int num)
{
    int sum = 0;
    int operand[num_of_STU];
    float Aver=0;

    for(int i=0; i<num_of_STU; i++)
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
        sum += operand[i];
    }

    Aver = (float)sum/(float)num_of_STU;
    printf("     %.2f   |",Aver);

    return Aver;
}

void cal_SD(pgrade array, int subject,float avg)
{
    float SD=0;
    int sum =0;
    int operand[num_of_STU];
    for(int i=0; i<num_of_STU; i++)
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
        SD += pow(operand[i]- (int)avg,2);
    }
    SD=sqrt((float)SD/(float)num_of_STU);
    printf("     %.2f   |",SD);
}
