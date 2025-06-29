// Static Memory vs Dynamic Memory 

#include <iostream>
#include <stdio.h>
using namespace std ;
 

 int main (){

    int A[5]={11,22,33,44,55};
    int *p;
    p=new int[5]; // Memory Allocation in Heap c++
    p=(int *) malloc(5*sizeof(int));

    p[0]=10;
    p[1]=22;
    p[3]=34;
    p[4]=45;
    p[2]=23;

    for(int i=0;i<5;i++){
        printf("%d\n",A[i]);

    }


    printf("Dynamic Arrays :\n");
     
for(int i=0;i<5;i++){
        printf("%d\n",p[i]);

    }




    return 0;
     
 }
