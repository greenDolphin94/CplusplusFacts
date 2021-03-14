#include <stdio.h>

int main ()
{
  int var;
  int *ptr;
  int **pptr;

  var = 3000;


  /* take address of var */
  ptr = &var;

  /* take the address of ptr using address operator '&' */
  pptr = &ptr;

  /* take the value using pptr */
  printf("--- VAR --- \n");
  printf("var = %d\n&var = %p\n\n", var, &var);
 
  printf("--- PTR --- \n");
  printf("ptr = %p\n&ptr = %p\n*ptr = %d\n\n ", ptr, &ptr, *ptr);
 
  printf("--- PPTR --- \n");
  printf("pptr = %p\n&pptr = %p\n*pptr = %p\n**pptr = %d\n", pptr, &pptr, *pptr, **pptr);  

}
