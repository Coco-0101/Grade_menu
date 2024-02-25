#include "head.h"

void PrintScore(pgrade pg,float Avg[]){
    printf("========================================================\n");
    printf("      ID     |     Math    |   English   |   Science   |");
    printf("\n========================================================\n");

    for(int i=0; i<num_of_STU; i++)
    {
        typesetting(pg[i].ID);
        typesetting(pg[i].Math);
        typesetting(pg[i].English);
        typesetting(pg[i].Science);
        printf("\n--------------------------------------------------------\n");
    }
}

void typesetting(int object2set)               //for typesetting
{
    if(object2set<10)
        printf("       %d     |",object2set);
    else
        printf("      %d     |",object2set);
}
