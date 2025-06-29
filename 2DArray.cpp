// 2D Array in DSA 

 // in Array Memory Alloaction Is Contigious 

  
 #include<iostream>
 #include<stdio.h>
 using namespace std ;


 int main (){

    // Method 01
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
     

    // Method 02

    int *B[3]; // Rows
    B[0]=new int (4);
    B[1]=new int (4);
    B[2]=new int (4);



int **C;
C=(int **)malloc(3*sizeof(int ));
C[0]=(int *)malloc(4*sizeof(int));
C[1]=(int *)malloc(4*sizeof(int));
C[2]=(int *)malloc(4*sizeof(int));


for(int i=0; i<3;i++){
    for(int j=0;j<4;j++){
        printf("%d  ",A[i][j]);
         
    }
    printf(" \n");
     
}
 







     
     return 0;
      
 }
  