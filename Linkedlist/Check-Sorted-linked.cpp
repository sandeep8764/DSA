#include<iostream>
using namespace std;

struct Node 
{
    int data ;
    Node *next ;
    
};
Node* first = nullptr;
Node* second = nullptr;
Node* third = nullptr;
// Function to Display Linked list 


void Display (Node *p)
{
    while(p!=nullptr)
    {
        cout<< p->data << "  " ;
        p=p->next;
    
    }
    cout<< endl;
     
}
void Createlinkedlist (int A[],int n)
{
    Node *t, *last ;
    first =new Node ;
    first ->data=A[0];
    first ->next=nullptr;
    last=first ;
    
    for (int i=1; i<n ; i++)
    {
        t=new Node ;
        t->data=A[i];
        t->next=nullptr;
        last->next=t; // link previous last node to new node 
        last =t ;  // move previous last to new last 
        
        
        
        
    }
    
}
 int Sorted(struct Node *p)
 {
    int x=-32768;
   
   
    while (p!=nullptr)
    {
        
        if (p->data<x) return 0 ;
        else 
        {
            x=p->data;
            p=p->next;
           
            
        }
        
        
    }
    return 1 ;
 }
 



int main ()
{ 
    int A[]={12,23,24,45,6,89,200};
    Createlinkedlist(A,7);
    Display(first);
   if( Sorted(first)>0)
   
   {
    cout<< " Linked list is sorted !"<< endl;
    
    
   }
   else 
   {
    cout<< " linked list is not Sorted !" << endl;
     
   }
     
    
    
    return 0;
     
}