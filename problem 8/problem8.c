#include "qsort.c"
#include <stdio.h>

int main()
{
    FILE *f;
   
    int number[1000];
    int N =1000;
    f = fopen("data.txt","r");

    for(int i=0;i<N;i++)
    {
        fscanf(f,"%d",&number[i]);

    }
    
    quicksort(number,0,999);
    for(int i=0;i<N;i++)
    {
        printf("%d\n",number[i]);
    }
    fclose(f);
    f =fopen("data_sorted.txt","w");
    for(int i=0;i<N;i++)
    {
        fprintf(f,"%d\n",number[i]);
    }
    fclose(f);
}