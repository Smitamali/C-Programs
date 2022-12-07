#include<stdio.h>

int main()
{
     int Arr[4] = {11,21,51,101};
     int iCnt = 0;       //Loop Counter

     printf("Element of array are : \n");

     for(iCnt = 0; iCnt <=3; iCnt++)
     {
          printf("%d\n",Arr[iCnt]);    //4
     }
     
     return 0;
}