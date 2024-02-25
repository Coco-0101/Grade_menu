#include "head.h"

STU_grade grade[num_of_STU];
pgrade pg = 0;
float Avg[5];


int main()
{
    int option;
    srand(time(0));

    pg = read_txt(&grade);

    generate_new_data(pg);

    while(option !=6)
    {
        printf("\n(1):Class' score\n(2):Class' average and SD\n(3):Rank\n");
        printf("(4):Individual average\n(5):Generate new data\n(6):Exit\n");
        printf("\nPlease input the number to choose the 'option':");
        scanf("%d",&option);
        printf("\n");
        switch(option)
        {
        case 1:
            PrintScore(pg,Avg);
            writetxt(&grade); //save data
            break;
        case 2:
            Class_avg_and_SD(pg,Avg);
            break;
        case 3:
            printf("   (1): Math \n   (2): English \n   (3): Science \n   (4): Total\n");
            printf("   Please input the number to choose the 'subject':");
            scanf(" %d",&option);   //remember to add the space before %d
            abcde(pg,option);
            break;
        case 4:
            printf("   Please input the ID to search the average:");
            scanf(" %d",&option);
            individual(pg,option);
            break;
        case 5:
            printf("\nGenerating new data...\n\n");
            generate_new_data(pg);
            PrintScore(pg,Avg);
            writetxt(&grade);
            break;
        case 6:
            //option =6;
            printf("Bye~~\n");
            break;
        }
    }
    return 0;
}











