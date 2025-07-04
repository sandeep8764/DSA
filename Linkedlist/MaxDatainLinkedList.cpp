// linked List In DSA ->Sequence of Nodes (data and pointer (link))


#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;


struct Node 
{
    int data ;
    struct Node *next;
     


} *first=NULL ;

void Create (int A[],int n )
{
     int i;
     struct Node *t,*last ;
      first=(struct Node *)malloc(sizeof( struct Node ));
      first->data=A[0];
      first->next=NULL;
      last =first;
       

      for(i=1; i<n; i++)

      {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
         

      }

}


void Display(struct Node *p)
{
    while (p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
    
}
 
// Method 01 For max Find using loop 

int max(struct Node *p)
{
    int M=-32768;
    while(p!=0)
    {
        if(p->data>M)
        
           { 
            M=p->data;
           }
            p=p->next;

        
        


    }
    return M;

}

//Reccursive Function IN max Find 


int MaxReccursion(struct Node *p)
{
    int x=0;
    
    
        if(p==0)
        
            return INT32_MIN;

            x=MaxReccursion(p->next);

            if(x>p->data)
            {
                return  x;

            }
            else 
            return p->data;




        
        
    
    
}




 
 

 



int main()
{
    int A[]={11,200,33,23,55,66};


    Create(A,6);

    Display(first);

    printf(" Max Find In Linked List :%d\n",max(first));



    printf(" Max Find Using Reccursion Function :%d\n",MaxReccursion(first));




  




    return 0;
     
}
