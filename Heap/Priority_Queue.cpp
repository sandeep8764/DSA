#include<iostream>
#include<queue>
using namespace std;

priority_queue<int> pq;

int main ()
{
    pq.push(10);
     pq.push(15);
      pq.push(20);
       pq.push(5);
        pq.push(1);
         pq.push(12);
          pq.push(30);
          
    //for (int x :pq) cout<< x<< endl;// priority_queue does NOT support iteration
    
   cout<<  pq.top()<< endl;
   
    
    
    
}