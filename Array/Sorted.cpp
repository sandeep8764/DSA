
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



     
     
    


bool  Sorted(struct Array arr)
{
    for(int i=0; i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            return  false;
        


        }
        

         
    }
    return true;


}

int   Sorted1(struct Array arr)
{
    for(int i=0; i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            return  0;
        


        }
        

         
    }
    return 1;


}



 
int main (){
    
    struct Array arr ={{1,2,39,5,7,8,20,26},10,8};
    
    // arr.A = new int[arr.size];
    // cout << " Array is Sorted or not ="<< Sorted(arr)<< endl;

   int SortedResult= Sorted1(arr);

    if(SortedResult>0) 
    {
        cout << " Array  is Sorted "<< endl;

    }
    
else 
{
    cout << " Array  is Not Sorted " << endl;

}

    


    
    Display(arr);

     return 0;
      
}