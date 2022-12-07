#include<stdio.h>

struct Student
{
     int Marks;
     int Age;
     int Division;
};

int main()
{
     struct Student obj; //9byte
     struct Student *ptr = NULL; //8byte
     // struct Student *ptr = &obj;
     ptr = &obj;

     //Indirect Accessing operator
     ptr->Marks = 90;
     ptr->Marks = 21;
     ptr->Division = 'B'

     return 0;
}