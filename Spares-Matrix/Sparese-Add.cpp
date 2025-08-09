#include<iostream>
using namespace std ;
 
class Element 
{
    public:
    int i ;
    int j;
     int x;
      
};
class Sparse 
{ 
    private :
    int m;
    int n;
    int num;
     Element *E; // As a Pointer 
     
     public: 
     Sparse (int m , int n , int num )
     {
        this->m=m;
        this->n=n;
        this->num=num;
        E = new Element[num]; // ✅ Allocate memory
        
     }
     ~Sparse()
     {
        delete [] E;
        
     }
    
    friend istream & operator>> (istream  &is ,Sparse &S);
    friend ostream & operator<<  (ostream  &os ,Sparse &S);
    
};
   
    
      istream & operator>> (istream  &is ,Sparse &S)
     {
        cout << " Enter Non Zero Element  :" << endl;
        for (int i =0; i<S.num ; i++)
        
            cin>> S.E[i].i>>S. E[i].j>>S. E[i].x;
        
        return is;
        
        
     }
     
      ostream & operator<<  (ostream  &os ,Sparse &S)
     {
        int k= 0 ;
        for (int i =0 ; i<S.m ;i ++)
        {
            for (int j =0 ; j<S.n ; j++)
            {
                if (S.E[k].i==i && S.E[k].j==j) 
                cout << S.E[k++].x<< "  ";
                
                else 
                cout << " 0 ";
                
            }
            cout << endl;
             
        }
        return os;
        
    }
    






int main ()
{
    Sparse S1(5,5,5);
    
    cin>>S1;//S1.Read();
    cout<< " Display matrix :"<< endl;
    
    cout<< S1;// S1.Display();
    
    

    return 0;
     
}
