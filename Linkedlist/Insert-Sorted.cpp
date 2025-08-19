#include<iostream>
using namespace std ;


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

// Create A linked list from Array 

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

void SortedInsert(struct Node *p,int x)
{
    struct Node  *t, *q=nullptr;
    t=new Node ;
    
    
    t->data=x;
    t->next=nullptr;
    
    
    if(first==nullptr)
    {
        first=t;
        
    }
    else 
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
            
            
        }
        if(p==first)
        {
            t->next=first ;
            first=t;
            
            
            
        }
        
        else 
        {
            t->next=q->next;
            q->next=t;
            
        }
    }
    
   
    
    
}

int main ()
{
    
    int A[]={10,23,45,56,78,90};
    Createlinkedlist(A,6);
    
    cout<< " linked list :  " ;
     
    Display(first);
    
    SortedInsert(first,102);
    
    
    cout<< " New Linked List After the Insertion : ";
    
    Display(first); 
    
    
    
    return 0;
     
}
