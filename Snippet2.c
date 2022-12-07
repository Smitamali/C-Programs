#include<stdio.h>

int main()
{
     double no = 3.14;
     double *a = &no;
     double **b = &a;
     double ***c = &b;
     double ****d = &c;

     printf("%d",sizeof(no));
     printf("%d",sizeof(a));
     printf("%d",sizeof(b));
     printf("%d",sizeof(c));
     printf("%d",sizeof(d));
     printf("%d",sizeof(**d));
     printf("%d",sizeof(****d));
     printf("%d",sizeof(*a));
     printf("%d",sizeof(***c));
     printf("%d",sizeof(**c));

     return 0;

}