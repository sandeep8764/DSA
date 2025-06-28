// FACTORAIL OF NUMBER USING RECCURSION 


 #include <iostream>
 #include <stdio.h>
 using namespace std ;

 int fact(int n){
    if(n>0){
        return n*fact(n-1);

    }
    return 1;

 }




  int main (){


    int x=0;
    int result =fact(x);
    printf(" Factoral of given number is :%d\n",result);
     

    return 0;
     
  }
  