#include <stdio.h>
#include "arithmetic.h"

/*
swap two variables withoutthe use of a third variable
*/
void swap_two_var(int a, int b){
  printf("a = %d\n
          b = %d\n\n", 
          a, b);
  printf("a = a + b\n
          b = a - b\n
          a = a - b\n");

  a = a + b;
  b = a - b;
  a = a - b;

  printf("a = %d\n
          b = %d\n\n", 
          a, b);
}

/*
swap two variables in one line
*/
void swap_one_line(int a, int b){
  printf("a = %d\n
          b = %d\n\n", 
          a, b);
  printf("a = b + a - (b = a)\n");

  a = b + a - (b = a);

  printf("a = %d\n
          b = %d\n\n", 
          a, b);
}
