// QUEUE in DSA 

#include <iostream>
using namespace std;


 class Queue 
 {
    public:
    int size ;
    int Front ;
    int Rear;
    int *Q;


 };
 void create (Queue *q,int size )
 {
    q->size=size;
    q->Front=q->Rear=-1;
    //Queue *Q=new Queue(q->size);
    q->Q = new int[size];  // Allocate memory for the queue array

 }
 void Enqueue(Queue *q,int x)
 {
    if(q->Rear==q->size-1) 
    cout<< " Queue is Overflow ";
    else
    {
        q->Rear++;
        q->Q[q->Rear]=x;

    }
}

    int  Dequeue(Queue *q)
    {  
        int x=0;
        if(q->Front==q->Rear)
        {
            cout<< " Queue is Empty :";

        }
        else{
            q->Front++;
            x=q->Q[q->Front];

        }
        return x;

    }

    void Display(Queue *q)
    {
        for(int i= q->Front+1 ;i<=q->Rear;i++)
        {
            cout<< q->Q[i]<< endl;

        }
    }

   
 

int main ()
{
    Queue q;
   create(&q,7);

Enqueue(&q,10);
Enqueue(&q,67);
Enqueue(&q,89);
Enqueue(&q,560);
Enqueue(&q,50);

cout<< " Delete Element is:"<< Dequeue(&q)<<endl;


Display(&q);

    q.Front=q.Rear=-1; // Initaially Queue is Empty 

    return 0;
     
}