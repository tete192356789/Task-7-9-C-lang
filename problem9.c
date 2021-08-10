#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* to_hex(value)
 {
    char* s; 
    char* HEX_DIGITS = "0123456789abcdef" ;
    s =(char*)malloc(5*sizeof(char));
    int last_num =8;
    if(value<0)
    {
        value += ( 1<<32);
    }
    for(int i=0;i<last_num;i++)
    {
       
        char d[] = {HEX_DIGITS[value & 0xf]};
        char *temp= strdup(s);
        strcpy(s,d);
        strcat(s,temp);

        value >>= 4;
        last_num++;
        if(value == 0 || last_num==8)
        {
            break;
        }
    }
    char front[] = "0x";
    char* temp2 = strdup(s);
    strcpy(s,front);
    strcat(s,temp2);
    return s;
    
 }
 int main()
 {
    int temp =-1;
    printf("%s\n",to_hex(temp));
    return 0;
 }