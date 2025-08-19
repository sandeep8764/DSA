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
void RemDublicate(struct Node *p)
{
    p=first ;
    Node *q=p->next;
    
    while (q!=nullptr)
    {
        if (p->data!=q->data)
        {
            p=q;
            q=q->next;
            
        }
        else 
        {
            p->next=q->next;
            delete q;
            q=p->next;
            
        }
    }
    
    
}
int main ()
{
    int A[]={12,3,3,4,6,6,6,8,8,90,90,90};
    Createlinkedlist(A,12);
    Display(first );
    RemDublicate( first );
    Display(first );
    
    
    
    return 0; 
}