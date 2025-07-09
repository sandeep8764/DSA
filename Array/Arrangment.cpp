
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

void Swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

}


void Arrangment(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;

    while(i<=j)
    {
        while (arr->A[i]<0) i++;

        while (arr->A[j]>0) j--;

        if(i<=j)
        {
            Swap(&arr->A[i],&arr->A[j]);

        }




        
    }
} 
int main (){
    
    struct Array arr ={{1,-2,39,5,-7,8,20,-26},10,8};
    
    // arr.A = new int[arr.size];
    // cout << " Array is Sorted or not ="<< Sorted(arr)<< endl;

   
    Arrangment(&arr);

    
    Display(arr);

     return 0;
      
}