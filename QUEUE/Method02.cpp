// QUEUE in DSA 

#include <iostream>
using namespace std;


 class Queue 
 {
    private:
    int size ;
    int Front ;
    int Rear;
    int *Q;


    public:
    Queue() // Non parameterized constructor 
    {
        Front=Rear=-1;
        size=10;
        Q=new int [size];

    }

    Queue (int size)
    {
         Front=Rear=-1;
        this->size=size;

        Q=new int [this->size=size];

    }

    void Enqueue(int x);
    int Dequeue();
    void Display ();


 };
 void Queue:: Enqueue(int x)
 {
    if(Rear==size-1) 
    cout<< " Queue is Overflow ";
    else
    {
        Rear++;
        Q[Rear]=x;

    }
}

int Queue:: Dequeue()
    {  
        int x=0;
        if(Front==Rear)
        {
            cout<< " Queue is Empty :";

        }
        else{
            Front++;
            x=Q[Front];

        }
        return x;

    }
//  void create (Queue *q,int size )
//  {
//     this->size=size;
//     Front=Rear=-1;
//     //Queue *Q=new Queue(q->size);
//     Q = new int[size];  // Allocate memory for the queue array

//  }
 

    

    void Queue:: Display()
    {
        for(int i= Front+1 ;i<=Rear;i++)
        {
            cout<< Q[i]<< endl;

        }
    }

   
 

int main ()
{
    Queue q(6);

  // create(&q,7);

  cout<< " Inserted Element is :"<< endl;


q.Enqueue(10);
q.Enqueue(39);
q.Enqueue(45);
q.Enqueue(50);
q.Enqueue(89);
q.Display();

cout<< " Delete Element is:"<< q.Dequeue()<<endl;


//q.Display();

    
    return 0;
     
}