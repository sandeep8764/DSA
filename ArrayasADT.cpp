// Arrays as ADT->




#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std ;

struct Array{
    int *A;
    int size;
    int length ;
     


};
void Display(struct Array arr){
    printf("elements are :\n");
    for(int i=0;i<arr.length;i++){
        printf("%d\n",arr.A[i]);



    }
}


int main (){


    struct Array arr;
    printf(" enter the size of an Array :");
    scanf("%d",&arr.size);
    // arr.A=new int(arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int ));
    arr.length=0;
     


int n;

    printf("Enter the value of n:");
    scanf("%d",&n);

    printf(" Enter the All elements :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr.A[i]);

    }
arr.length=n;


Display(arr);
 

      
     
    return 0;
     
}