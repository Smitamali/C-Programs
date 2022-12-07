#include <stdio.h>

// Structure declaration
struct Demo
{
    int i;
    float f;
    int j;
    double d;
};

int main()
{
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;
    // Member initialization
    obj1.d = 11;
    obj2.i = 21;
    obj3.j = 51;

    printf("Size of obj1 is:%d\n", sizeof(obj1));
    printf("Size of obj2 is:%d\n", sizeof(obj2));
     printf("i of obj2  is:%d\n", obj2.i);

     return 0;
    

}
