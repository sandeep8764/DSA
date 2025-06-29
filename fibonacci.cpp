// FIBONACCI SERIES USING RECCURSION 


#include <iostream>
#include <stdio.h>
using namespace std;

int fibo(int n){
    if(n<0) return 0;
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
    
}
    




int main() {
    int x=7;
   int  result =fibo(x);
    printf("%d\n",result);

    return 0;
}
