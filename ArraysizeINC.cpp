// HOW TO INCREASE ARRAY SIZE 

#include <iostream>
#include <stdio.h>
using namespace std ;
 

int main (){


     int *P,*Q; // pointer declaration 
     P= new int [5];
     P=(int *) malloc(5*sizeof(int ));
    P[0]=11;
    P[1]=22;
    P[3]=33;
    P[4]=44;
    P[2]=55;


    for(int i=0;i<5;i++){
        printf("%d\n",P[i]);
         
    }
printf("FOR INCREAMENT SIZE IN ARRAY\n");

Q=(int *) malloc(10*sizeof(int ));


for(int i=0;i<5;i++){
    Q[i]=P[i];

}
free(Q);

P=Q;
Q=NULL; // Delete the Array Q

for(int i=0;i<10;i++){
        printf("%d\n",P[i]);
         
    }
     
    return 0;
     
}