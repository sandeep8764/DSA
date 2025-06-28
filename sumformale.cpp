// Sum of n natural number by formulae 


#include <iostream>
#include <stdio.h>
using namespace std ;
 

int sum (int n){
    return n*(n+1)/2;
     
}

 int main(){

    int x;
    printf(" enter the values of x :");
    scanf("%d",&x);
    printf("you Entered the value of x:%d\n",x);

    int result =sum(x);
    printf("sum of n natural number is :%d\n",result);


     return 0;
      
 }