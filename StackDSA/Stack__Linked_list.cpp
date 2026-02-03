#include <iostream>

using namespace std;


struct node
{
    int data;
    struct node *next;   
} ;

struct node *top = NULL;
void push(int x)
{
    struct node *t;
    t= new struct node;
    if(t==NULL)
    {
        cout<< " Stack Overflow";
        
    }
    else 
    {
    t->data=x;
    t->next=top;
    top=t;
    }
    
}
 int pop()
 {
    struct node *p;
    int x=0;
    
    if(top==NULL)
    { 
        cout<< " Stack Is Empty";
    }
    else 
    {
        p=top;
        top=top->next;
       x=p->data;
       
        delete (p);
      
    }
    return x;
    
 }
 
 void Display()
 {
    struct node *p;
    p=top;
    while(p!=NULL)
    {
        cout<< p->data<< "  ";
        p=p->next;
      
    }
    cout << endl;
    
 }
int main (){
    
    push(10);
     push(20);
      push(30);
       push(40);
        push(50);
        
        
    Display();
    
    cout<< " Pop Element is :"<<pop() << endl;
    
    return 0;
    
}