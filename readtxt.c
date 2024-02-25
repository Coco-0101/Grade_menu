#include "head.h"
pgrade read_txt(pgrade pg)
{
    int i,j;
    FILE* fp=fopen("grade.txt","r"); //開啟檔案
    if(fp==NULL)
    {
        printf("無檔案");
        return -1;
    }
    for(i=0; i<num_of_STU; i++)
    {

        fscanf(fp,"%d",&pg[i].ID);/*每次讀取一個數，fscanf函式遇到空格或者換行結束*/
        fscanf(fp,"%d",&pg[i].Math);
        fscanf(fp,"%d",&pg[i].English);
        fscanf(fp,"%d",&pg[i].Science);
        fscanf(fp,"\n");
    }
    fclose(fp);
    return pg;
}
