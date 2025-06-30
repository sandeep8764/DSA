// Templates in c++
 
#include <iostream>
#include <stdio.h>
using namespace std ;

template <class T>
class Arithmetic {
    private:
    T a;
    T b;


    public:
    Arithmetic(T a,T b){
        this->a=a;
        this->b=b;

    }

    T Add(){
        T c;
        c=a+b;
        return c;

    }

    T sub(){
        T c;
        c=a-b;
        return c;
         
    }



};


int main (){
    Arithmetic <int > ar1(10,5),ar2(20,10);
    cout<<" add of number :"<< ar1.Add()<< endl;
    cout<<" add of 2nd number :"<< ar2.Add()<< endl;
    cout<<" substraction of number :"<< ar2.sub()<< endl;
    
     

    Arithmetic<float> ar3(12.35,12.45);
    cout<<"Addition of float number :"<< ar3.Add()<< endl ;

    return 0;

}
 