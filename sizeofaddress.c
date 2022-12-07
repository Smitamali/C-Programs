#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 3.14;
    double d = 9.567;

    printf("Value from the variables are :\n");
    printf("%c\n",ch);
    printf("%d\n",i);
    printf("%f\n",f);
    printf("%lf\n",d);

    printf("Size of each variable\n");
    printf("Size of character:%d\n",sizeof(ch));
    printf("Size of integer:%d\n",sizeof(i));
    printf("Size of float:%d\n",sizeof(f));
    printf("Size of double:%d\n",sizeof(d));


    printf("Address of each variable\n");
    printf("Address of character:\n",&ch);
    printf(" Address of integer\n",&i);
    printf("Address of float:%d\n",&f);
    printf("Address of double:%d\n",&d);

    return 0;
}