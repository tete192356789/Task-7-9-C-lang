#include <stdio.h>
#include <stdlib.h>

int main() 
{
   
   int N = 1000;
   FILE *f;
   f = fopen("data.txt","w");
   for(int i=0;i<N;i++)
   {
      fprintf(f,"%d\n",rand()%N);

   }
   fclose(f);
}
