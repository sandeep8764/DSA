#include<iostream>
using namespace std ;
struct Node 
{
    int data;
    Node *next;
    
};
Node* first = nullptr;
Node* second = nullptr;
Node* third = nullptr;

void Createlinkedlist1 (int A[],int n)
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
void Createlinkedlist2 (int A[],int n)
{
    Node *t, *last ;
    second =new Node ;
    second ->data=A[0];
    second ->next=nullptr;
    last=second ;
    
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
void Concatenation(struct Node *p, struct Node *q)
{
    third=p; // third pointer points on p
    while(p->next!=nullptr)
    {
        p=p->next;
        
    }
    p->next=q;
    q=nullptr;
    
    
    
}
void MergeLinked(struct Node *p,struct Node *q)
{
    struct Node *last ;
    if(p->data<q->data)
    {
        third=last=p;
        p=p->next;
        last->next=nullptr;
        
        
    }
    else 
    {
        third=last=q;
        q=q->next;
        last->next=nullptr;
    }
    while(p && q)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=nullptr;
            
        }
        else 
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=nullptr;
        }
        
    }
    if(p!=nullptr)
    last->next=p;
    last->next=q;
    
}
int main ()
{
    int A[]={12,23,34,45,56,67};
    Createlinkedlist1(A,6);
    cout<< " First Linked list : ";
    Display(first);
    
    int A2[]={11,22,33,44,55,66};
    Createlinkedlist2(A2,6);
    cout<< " Second Linked list :";
    Display(second);
    
    
    cout<<" Concatenation of linkedlist :";
    Concatenation(first,second);
    Display(third);
    
    MergeLinked(first,second);
    cout<<" Merged linked list :";
    Display(third);
    
    
    
    return 0;
     
}