// Searching In Linked List 

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
 

int    Search(struct Node *p,int key)
{
    while(p!=0)
    {
        if(key!=p->data)
        {
            p=p->next;

        }
        else 
        {
            int x=printf(" Key Element Is Found:%d\n",key);
            return x;

        }


    }

    return  0 ;
}

int  SearchReccursive(struct Node *p ,int key )
{
    while(p!=0)
    {
        if(p==0) 
        
        return 0;
     

        if(key==p->data)
        return p->data;

        return SearchReccursive(p->next,key);

    }

};



int main()
{
    int A[]={11,200,33,23,55,66};


    Create(A,6);

    Display(first);



// printf("Element is Found :%d\n",Search(first,200));
//Search(first,33);

printf("Searching by reccursive :%d\n",SearchReccursive(first,50));



    return 0;
     
}
