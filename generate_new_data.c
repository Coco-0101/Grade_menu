#include "head.h"

void generate_new_data(pgrade pg)
{
    for(int i=0; i<num_of_STU; i++)        //generate score
    {
        pg[i].ID =i+1;
        pg[i].Math =rand()%100;
        pg[i].English =rand()%100;
        pg[i].Science =rand()%100;

    }
}
