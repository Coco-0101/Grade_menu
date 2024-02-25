#include "head.h"
FILE *fptr;
pgrade writetxt(pgrade pg)
{
    float Avg[5];

    fptr = fopen("grade.txt","w");
    if (fptr == NULL)
    {
        printf("fail to open file!\n");
        exit(1) ;
    }
    fprintf(fptr,"========================================================\n");
    fprintf(fptr,"      ID     |     Math    |   English   |   Science   |");
    fprintf(fptr,"\n========================================================\n");

    for (int i=0; i<num_of_STU; i++)
    {
        ftypesetting(pg[i].ID);
        ftypesetting(pg[i].Math);
        ftypesetting(pg[i].English);
        ftypesetting(pg[i].Science);
        fprintf(fptr,"\n--------------------------------------------------------\n");
    }

    if (fclose(fptr)==-1){
        printf ("fail to close");
        exit(1);
    }
    fclose(fptr);
}

void ftypesetting(int fobject2set)               //for typesetting
{
    if(fobject2set<10)
        fprintf(fptr,"       %d     |",fobject2set);
    else
        fprintf(fptr,"      %d     |",fobject2set);
}
