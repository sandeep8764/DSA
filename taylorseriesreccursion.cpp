// TAYLOR SERIES USING RECCURSION 


#include <iostream>
#include <stdio.h>
using namespace std ;

double e(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;

    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;

    }
}


int main (){


    printf("%lf\n",e(5,10));



    return 0;

}