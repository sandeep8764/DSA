// nested reccurssion 
#include <iostream>
#include <stdio.h>
using namespace std ;


int fun(int n){
    if(n>100){
        return n-100;

    }
    else{
       return fun(fun(n+11));

    }
}

int main (){

int x=95;

printf("%d\n",fun(x));

    return 0;
     
}