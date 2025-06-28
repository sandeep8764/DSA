// Sum OF Last n Number


#include <iostream>
#include <stdio.h>
 using namespace std ;
  
int sum (int a){
    if(a>0){
        return sum(a-1)+a;

    }
    return 0;

}
int main (){


    int n;
    printf("Enter the Value of n:");
    scanf("%d",&n); // pass the address of n
    printf("You Entered: %d\n",n);


   int  result =sum(n);
   printf("Sum Of n Natural Number Is:%d\n",result);


    


    return 0;
     
}