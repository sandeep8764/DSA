// Perform Delete Operation ADT in DSA 

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


struct Array {
    int Arr[10];
    int size;
    int length ;
     
};
 
int Delete(struct Array *arr,int index){

    if(index>=0 && index <arr->length ){
       int  x=arr->Arr[index];
       for(int i=index; i<arr->length-1;i++){
        arr->Arr[i]=arr->Arr[i+1];
         
       }
       arr->length--;
        
return x;
 
    }

return 0;


}
int main (){

    struct Array arr={{10,20,33,44,55,66,77},10,5};

printf("%d\n",Delete(&arr,4));
 
    return 0;
     
}
