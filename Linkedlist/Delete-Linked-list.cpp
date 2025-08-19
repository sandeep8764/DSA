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

int Delete(int pos)
{
    Node *p , * q;
    int x=-1;
    if (pos==1)
    {
        x= first->data;
        p=first;
        first=first->next;
        delete p;

    }
    else 
    {
        p=first ;
        q=nullptr;
        for (int i =0; i<pos-1 && p; i++)
        {
            q=p;
            p=p->next ;
            
        }
        if (p)
        {
            q->next=p->next;
            x= p->data;
            delete p;
            
            
        }
        
        
    }
    return x;
    
    
}

int main ()
{
    int A[]={12,34,5,6778,87,90};
    Createlinkedlist(A,6);
    cout<< " Original Linked list : ";
    Display(first);
    cout<< " After the Deletion : ";
    // Delete(5); // 87 is deleted from linked list 
    //Display(first);
    cout<< Delete(4)<<endl;
     Display(first);
    
    
    
    return 0;
     
}