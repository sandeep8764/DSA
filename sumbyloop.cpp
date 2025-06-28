//

#include <iostream>
#include <stdio.h>
using namespace std ;
 

int sum (int n){
   int  sum=0;
   for(int i=0;i<=n;i++){
    sum =sum+i;


   }
   return sum;
    

}


 int main(){

    int x;
    printf(" enter the values of x :");
    scanf("%d",&x);
    printf("you Entered the value of x:%d\n",x);

    int result =sum (x);
    printf("Sum of n natural number is :%d\n",result);
     


     return 0;
      
 }