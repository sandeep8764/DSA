#include<iostream>
using namespace std ;


class Diagonal 
{
    private :
    int n ;
    int  * A;
    
    public :
     
    Diagonal ( int n )
    {
        this->n=n;
        A= new int [n];
        
    }
    
    void setfunction (int i , int j , int x);
    int getfunction ( int i , int j );
    void Display ();
    ~Diagonal ();
    
    
    
};

void Diagonal :: setfunction ( int i , int j ,  int x )
{
    if ( i >= j ) A[i-1 ]=x;
}
int Diagonal :: getfunction( int i , int j )  
{
    if ( i>=j ) return A[i-1];
     return 0;
     
    
}  

void Diagonal :: Display()
{
    for (int i=0 ; i<n ; i++)
    {
        for ( int j =0 ; j <n ; j++)
        {
            if (i>=j) cout << A[i] << "  ";
            else cout << " 00 ";
            
            
        }
        cout << endl;
        
    }
}
Diagonal::~Diagonal()
{
    delete[] A;
}


int main ( )
{
    Diagonal M(3);
    
    M.setfunction(1,1,12);
     M.setfunction(1,2,10);
      M.setfunction(1,3,30);
       M.setfunction(2,1,40);
        M.setfunction(2,2,50);
         M.setfunction(2,3,78);
          M.setfunction(3,1,98);
           M.setfunction(3,2,65);
           M.setfunction(3,4,43);
           M.setfunction(3,3,23);
           M.setfunction(3,5,90);
           
     M.getfunction(1,5);
     M.getfunction(4,5);
     
     
     M.Display();
     
           
           
           
           
    
}