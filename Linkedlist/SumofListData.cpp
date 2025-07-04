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
 

 
 // Sum of Linked List Data method 01 loop walaa 

 int Adddata(struct Node *p)
 {
    int sum=0;
    while (p!=0)
    {
        sum=sum+p->data;
        p=p->next;


    }
    return sum;
     
    
 }

int AddReccursive(struct Node *p)
{

    if(p==0)
    return 0;
    return p->data+AddReccursive(p->next);


}




int main()
{
    int A[]={11,22,33,44,55,66};


    Create(A,6);

    Display(first);

   printf(" Sum Of Data In Linked List :%d\n",Adddata(first ));

   printf(" Sum Of Linked list Data By Reccursion :%d\n",AddReccursive(first));





    return 0;
     
}
