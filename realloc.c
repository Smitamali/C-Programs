#include<stdio.h>
#include<stdlib.h>

int main()
{
      int *p = NULL;
      int *q = NULL;

      p = (int *)malloc(10 * sizeof(int));

      // Use the memory

      p = (int *)realloc(p, 15 * sizeof(int));
      if(q ==NULL)
      { 
          printf("Realloc fails");
          q = p;
      }

      //Use the memory

      free(q);

      return 0;
}

// void * realloc(void *ptr , int size);

p = (int *)Realloc(NULL, 10 * sizeof(int));     //mallocs

p = (int *)Realloc(p, 0);                //free
