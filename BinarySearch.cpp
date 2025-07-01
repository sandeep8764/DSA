// Binary Search In Array->Arrays must be Sorted 

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std ;


struct Array{
    int array[15];
    int size;
    int length ;
     
};
 // Method 01 Irritative version 

 int Binarysearch( struct Array arr ,int key ){
    int low,high ;

    low=0;
    high=arr.length-1;

     
    while(low<=high)
    {
        int mid=low+(high-low)/2;
         
        if(key==arr.array[mid])
        {
        return mid;
        }

        else if(key<arr.array[mid]){
            high=mid-1;

        }
        else{
            low=mid+1;

        }


     

    }
    return -1;
     
 }


 int ReccursionBinarysearch(int arr[],int low, int high ,int key  )
 {
    
    if(low<=high)
    {
        int mid=low+(high-low)/2;
        if(key==arr[mid])
        {
            return mid;

        }
        else if(key<arr[mid])
        {
          return   ReccursionBinarysearch(arr,low,mid-1,key);


        }
        else
        return ReccursionBinarysearch(arr,mid+1,high,key);




    }
    return -1;

    
 }

int main ()


{

struct Array arr={{12,23,34,45,56,67,78,89,90,100,120,125,145},16,15};
int x;
 
printf(" Enter the key Elements :");
scanf("%d",&x);

 
 printf("Binary Search result:%d\n",Binarysearch( arr,x));


printf("Binary Search using reccursion:%d\n",ReccursionBinarysearch(arr.array,0,arr.length-1,x));



    return 0;
     
}

