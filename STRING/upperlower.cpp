//


#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    char string []="WELCOME";
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]>=65 && string[i]<=90)
        {
            string[i]+=32; // Convert Upper Case To Lower Case 

        }
         else if(string[i]>=97 && string[i]<=122)
         {
         string[i]-=32; // Convert Lower case to Upper Case 
         }


         
    }

    printf("Final String After toppled is :%s\n",string);
     
    return 0;
     
}