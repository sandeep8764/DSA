// String Length in Arrays

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    char string []="WELCOME";
    for(int i=0;string[i]!='\0';i++)
    {
         printf(" %d\n",string[i]); // PRINT THE ASCII VALUE OF "WELCOME"
        printf("index:%d %c\n",i,string[i]); // PRINT THE WELCOME OR STRING INDEX 

         
         
    }
    return 0;
     
}