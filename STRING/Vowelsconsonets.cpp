// Counting Of Vowels And Consonents 

#include<iostream>
#include<stdio.h>
using namespace std ;

int WordsCount( char A[])
{
    int words=0;
    for(int i=0; A[i]!='\0' ;i++ )
    {
        if (A[i] != ' ' && A[i-1]!=' ')    // Condition For Words count 
        {
            words++;
             
        }
    }
    return words;
     
}
 
int main ()
{

    char A[]=" how are you "; // String should be in lower case 
    int Vowel=0;


    for(int i=0; A[i]!='\0';i++)
    {
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' )
        {
           Vowel++;

        }
    }
    printf("Number of Vowels in String :%d\n",Vowel);
    printf(" Number of Total Words :%d\n",WordsCount(A)); 
     
     return 0;
      
}