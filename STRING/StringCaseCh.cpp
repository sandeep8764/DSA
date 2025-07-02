// Change The case of Given String 


#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    char string []="WELCOME";
    for(int i=0;string[i]!='\0';i++)
    {
         
       // printf("index:%d %c  \n",i,string[i]+32); // PRINT THE WELCOME OR STRING INDEX and also convert to loweer case 
       string[i]=string[i]+32;

    }
    printf("%s\n",string);

    return 0;
     
}