// static variables in dsa 

#include <iostream>
#include <stdio.h>
 using namespace std ;
  

int fun(int n){
    static int s=0;

    if(n>0){
        s++;
        return fun(n-1)+s;


    }

return 0;
 
}

 int main (){
    int x=5;
    printf("%d\n",fun(x));



    printf("%d\n",fun(x));


    return 0;
     
 }