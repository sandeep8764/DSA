// Lets Code For Stack in DSA  in c++

#include <iostream>
using namespace std;

struct Stack {
    int size ;
    int Top;
    int *S; // pointer type Array 

};

void Create (struct Stack *st)
{
    cout << " Enter the Size :";
    cin>> st->size;
    st->Top=-1;
    st->S = new int[st->size];

}

void Display(struct Stack *st) // Call by pointer 
{
    int i;
    for(i=st->Top;i>=0;i--)
    {

        cout<< st->S[i]<< endl;

    }
}




void push(struct Stack *st,int x)
{
    if(st->Top>=st->size-1)
    {
       cout<<" Stack is Full:"<< endl;

    }
    else
    {
        st->Top++;
        st->S[st->Top]=x;

    }
    
     
}

int pop(struct Stack *st )
{
    int x=-1;
    if(st->Top==-1)
    {
        cout<< " Stack is Empty :";


    }
    else 
    {
      //st->Top--;
      x = st->S[st->Top--];  // ✅ fix this line
     //  st->Top--;
      

    }
    return x;
     
}

int peek (struct Stack st,int index)
{
    int x=-1;
    if(st.Top-index+1<0)
    {
       cout<<" Invalid Index " << endl;
        
    }
     else 
     {
        x=st.S[st.Top-index+1];

     }
     return x;
      
}

int ISempty(struct Stack st)
{
    if(st.Top==-1)
    {
        return 1;


    }
    return 0;
     

}

int ISfull(struct Stack st)
{
    if(st.Top==st.size-1)
    return 1;
    return 0;

}


 int main ()
 {

    struct Stack st;
    Create(&st);
    

  push(&st,10);
  push(&st,20);
  push(&st,45);
  push(&st,65);
   push(&st,100);
    push(&st,200);
     push(&st,50);
      push(&st,2005);
      

   Display(&st);

 cout << " popped element is :"<< pop(&st)<< endl;

 
   cout<<" Display Element :"<< endl;


   Display(&st);

   // peek(st,3);

   cout<< " Peek Element From Top (LIFO) Is :"<< peek(st,3)<< endl;


   cout<< " Stack Is Empty or not :"<<ISempty(st)<< endl;

   cout<< " Stack is Full or not :"<< ISfull(st)<< endl;
    


    



     


    return 0;
     
 }
