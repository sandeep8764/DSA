//INDIRECT RECCURSION ->Indirect Recursion happens when two or more functions call each other in a cycle


#include <iostream>
#include <stdio.h>
using namespace std ;

void fun2(int n); // prototype define function 
void fun1(int n){
    if(n>0){
        printf("%d\n",n);
        fun2(n-1);

    }
}
void fun2(int n){
    if(n>1){
        printf("%d\n",n);
        fun1(n/2);

    }
}
int main (){

    int x=25;
    fun1(x);


    return 0;


}