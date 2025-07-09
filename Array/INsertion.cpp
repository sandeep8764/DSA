// Insert A Element In Sorted Array 

#include <iostream>
using namespace std ;

struct Array {
    int A[10];
    int size ;
    int length ;
     
};

void Display(struct Array arr) {
    printf("elements are:\n");
    for (int i = 0; i < arr.length; i++) {
        printf("%d\n", arr.A[i]);
    }
}


void Insert(struct Array *arr,int val)
{
    if(arr->length==arr->size) return ;

    int i=arr->length-1;
    while( i>=0 &&val<arr->A[i])
    {
        arr->A[i + 1] = arr->A[i]; // shift
        i--;

    } 
    arr->A[i+1]=val;
    arr->length++;
     
     
    
}




 
int main (){
    
    struct Array arr ={{1,2,3,4,5,7,8,20},10,8};
    
    // arr.A = new int[arr.size];


     
   Insert(&arr,6);
   Insert(&arr,15);






    Display(arr);

    

     
     
     return 0;
      
}