#include<iostream>
using namespace std ;


class Uppertriangular
{
    private :
    int n ;
    int  * A;
    
    public :
     
     Uppertriangular ( int n )
    {
        this->n=n;
        A= new int [(n*n +n)/2];
        
    }
    
    void setfunction (int i , int j , int x);
    int getfunction ( int i , int j );
    void Display ();
    ~ Uppertriangular ();
    
    
    
};

void  Uppertriangular :: setfunction ( int i , int j ,  int x )
{
    if ( j >= i ) A[((j-1)*n -(j-2)*(j-1)/2 ) +(j-i)]=x;
}
int  Uppertriangular :: getfunction( int i , int j )  
{
    if ( j >= i) return A[((j-1)*n -(j-2)*(j-1)/2 ) +(j-i)];
     return 0;
     
    
}  

void  Uppertriangular :: Display()
{
    for (int i=1 ; i<=n ; i++)
    {
        for ( int j =1 ; j <=n ; j++)
        {
            if (j >= i) cout << A[((j-1)*n -(j-2)*(j-1)/2 ) +(j-i)] << "  ";
            else cout << " 00 ";
            
            
        }
        cout << endl;
        
    }
}
 Uppertriangular::~ Uppertriangular()
{
    delete[] A;
    
}


int main ( )
{
    Uppertriangular  M(4);
    
    M.setfunction(1,1,11);
    M.setfunction(1,2,12);
    M.setfunction(1,3,13);
    M.setfunction(1,4,14);
    M.setfunction(2,1,21);
    M.setfunction(2,2,22);
    
    M.setfunction(2,3,32);
    M.setfunction(2,4,24);
    M.setfunction(3,3,33);
     M.setfunction(3,4,34);
     M.setfunction(4,4,44);
           
     M.getfunction(1,5);
     M.getfunction(4,5);
     
     
     M.Display();
     
           
           
           
           
    
}