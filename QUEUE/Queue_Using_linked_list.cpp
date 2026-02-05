#include<iostream>
using namespace std ;

class Node{
    public:
    int data ;
    Node *next;
    
    
};
 Node *front=NULL;
 Node *rear=NULL;
 
 // Enqueue (Insert)
void enqueue(int x)
{
    Node* t = new Node;
    t->data = x;
    t->next = NULL;

    if (rear == NULL)  // empty queue
    {
        front = rear = t;
    }
    else
    {
        rear->next = t;
        rear = t;
    }
}
// Dequeue (Delete)
int dequeue()
{
    if (front == NULL)
    {
        cout << "Queue is Empty\n";
        return -1;
    }

    Node* p = front;
    int x = p->data;

    front = front->next;

    if (front == NULL)  // queue becomes empty
        rear = NULL;

    delete p;
    return x;
}
// Display queue
void display()
{
    Node* p = front;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}



int main ()
{
    enqueue(10);
    enqueue(110);
    enqueue(1045);
    enqueue(107654);
    
    
    display();
    dequeue();
    display();
    
    
    return 0;
    
}