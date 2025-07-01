// Searching (ADT) ->linear search 

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std ;
 
struct Array {
    int Array[10];
    int size;
    int length ;

};
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;

}

int linearsear(struct Array arr,int key ){
    for(int i=0;i<arr.length;i++){
        if(key==arr.Array[i]){
            
            return i;
            // also use transposition ,move to head (i=0)


        }
        

    }
        return -1;


}



int main(){

    struct Array arr={{11,22,33,44,55,66,77,88,99,100},10,10};

printf("searched Element at index:%d\n ",linearsear(arr,55));


    return 0;
     
}
