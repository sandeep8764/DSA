#include<iostream>
using namespace std;
struct Node 
{
    int data;
    Node *next ;
    
    
};
Node* first = nullptr;
Node* second = nullptr;
Node* third = nullptr;

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
void Display (Node *p)
{
    while(p!=nullptr)
    {
        cout<< p->data << "  " ;
        p=p->next;
    
    }
    cout<< endl;
     
}
// Reverse a linked list by Array Method 01 


// Reverse alinkedlist by Reversing link method02 

void Reverse(struct Node *p)
{
    struct Node *q, *r;
    q=nullptr;
    r=nullptr;
    
    while(p!=nullptr)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
        
    }
    first=q;
    
    
}

// Reverse Alinkd list by Reccursive method 03 

void ReversedRecc(Node *p, Node * q)
{
    if (p!=nullptr)
    {
        ReversedRecc(q,p->next);
        p->next=q;
        
    }
    else 
    {
        first =q;
        
    }
}




int main ()
{
    int A[]={12,34,56,78,90,32};
    Createlinkedlist(A,6);
    Display(first);
    Reverse(first);
    Display(first );
    cout<< " By Reccursive method 0 3" << endl;
     ReversedRecc(nullptr,first);
     Display(first);
     
    
    
    
    return 0; 
}
