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
    

    Queue (int size)
    {
         Front=Rear=0;
        this->size=size;

        Q=new int [this->size];

    }

    void Enqueue(int x);
    int Dequeue();
    void Display ();


 };
 void Queue:: Enqueue(int x)
 {
    if((Rear+1)%size==Front) 
    cout<< " Queue is Overflow "<< endl;

    else
    {
        Rear=(Rear+1)%size;

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
           Front = (Front+1)%size;

            x=Q[Front];

        }
        return x;

    }

 

    

    void Queue:: Display()
    {
        int i=Front+1;
        if (Front == Rear) 
        {
         cout << "Queue is Empty" << endl;
          return;
        }


        do
        {
            cout<< Q[i] << endl;
            i=(i+1)%size;


        }
        while (i!=((Rear+1)%size));

        
    }

   
 

int main ()
{
    Queue q(6);

  

  cout<< " Inserted Element is :"<< endl;


q.Enqueue(10);
q.Enqueue(39);
q.Enqueue(45);
q.Enqueue(50);
q.Enqueue(89);
q.Enqueue(100);
q.Enqueue(250);
q.Enqueue(567);

q.Enqueue(1500);



q.Display();

cout<< " Delete Element is:"<< q.Dequeue()<<endl;


//q.Display();

    
    return 0;
     
}