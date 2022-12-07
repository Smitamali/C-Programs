#include <stdio.h>

int Multiplication (int no1,int NO2)
{
     int Ans=0;
    
     Ans=no1*NO2;
     return Ans;
}
int subtraction (int no1,int NO2)
{
     int Ans=0;
    
     Ans=no1-NO2;
     return Ans;
} 

int devide (int no1,int NO2)
{
     int Ans=0;
    
     Ans=no1/NO2;
     return Ans;
}
 int main()
 {
     int A=100,B=11;
     auto int mult=0;
     auto int sub=0;
     auto int div=0;

     mult = Multiplication(A,B);
     sub = subtraction(A,B);
     div = devide(A,B);

     printf("Multiplication is:%d \n",mult);
     printf("subtraction is is:%d \n",sub);
     printf("devision is:%d \n",div);

     return 0;

 }  

  

