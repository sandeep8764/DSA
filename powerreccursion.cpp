// POWER USING RECCURSION 


#include <iostream>
#include <stdio.h>
using namespace std ;


int pow(int m,int n){
    if(n>0){
        return m*pow(m,n-1);

    }
    else
    return 1;

}

int main (){

    int m,n;
    m=2;
    n=5;

    int result=pow(m,n);
    printf("power values is= %d\n",result);
     
    return 0;
     
}