// TAYLOR SERIES USING HARNOR's SERIES 


#include <iostream>
#include <stdio.h>
using namespace std ;

double e(int x,int n){
    double s=1;
    if(n==0){
        return s;
    }

    else

        s=1+(x*s)/n;

        return e(x,n-1);

    

    }


int main (){


    
    printf("%lf\n",e(2,10));

    return 0;
     
}