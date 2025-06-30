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
// MORE EFFICIENT CODE
int pow1(int m,int n){
    if(n==0){
        return 1;

    }
    if(n%2==0){
        return pow(m*m,n/2);

    }
    else
    return 2*pow(m*m,(n-1)/2);

}


int main (){

    int m,n;
    m=2;
    n=5;

    int result=pow1(m,n);
    printf("power values is= %d\n",result);
     
    return 0;
     
}