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

void Createlinkedlist(int A[],int n)
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
// Display Function 
void Display (Node *p)
{
    while(p!=nullptr)
    {
        cout<< p->data << "  " ;
        p=p->next;
    
    }
    cout<< endl;
     
}
int Isloop(struct Node *f)
{
    Node *p=f;
    Node *q=f;
    
    while (p && q && q->next) {
        p = p->next;           // slow (1 step)
        q = q->next->next;     // fast (2 steps)

        if (p == q) return 1;  // loop detected
    }
    return 0; // no loop
    
    
    
}

int main ()
{ 
    
    
    
    int A[]={23,45,67,78,89,120};
    Createlinkedlist(A,6);
     //Display(first );
    struct Node *t1,*t2;
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
   
    
    cout << " loop checked :"<<(Isloop(first)?"yes":"No");
    
    
    
    return 0;
    
}