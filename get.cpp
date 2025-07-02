// Various function On Arrays as ADT

#include<iostream>
#include<stdio.h>
using namespace std;

struct Array{
    int array[10];
    int size;
    int length;

};
 // get (index)

 int getindex(struct Array arr,int index){

    if(index>=0 && index<arr.length)
    {
        return arr.array[index];


    }
    return -1;


 }


int main (){

    struct Array arr={{8,3,9,15,6,10,7,2,12,4},10,10};

    printf("Element At Index :%d\n",getindex(arr,5));





    return 0;
     
}