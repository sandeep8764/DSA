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
 

 
 // Nodes Count IN linked List Method 01

 int NodeCount(struct Node *p)
 {
    int Count=0;
    while(p!=0)
    {
        Count++;
        p=p->next;

    }
    return Count;

 }

 int CountReccursive(struct Node *p)
 {
    int Count=0;
    if(p==0)
    return 0;
    return 1+CountReccursive(p->next);

 }






int main()
{
    int A[]={11,22,33,44,55,66};


    Create(A,6);

    Display(first);

   printf("Number of Nodes In Linked List :%d\n", NodeCount(first)); // loop Method 

   printf("Number of Nodes IN linked List by reccurrsion Function :%d\n",CountReccursive(first));
    


    

     



    return 0;
     
}
