#include <stdio.h>

int main()
{
  int a = 0;
  int b = -1;
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if ( a != 0 )
  {
    printf("a is not equal to zero\n");
  }
  else 
  {
    printf("a is still equal to zero\n");
  }
  if ( a > b )
  {
     printf("a > b\n");
  }
  if ( a >= b ) 
  {
    printf("a is greater than or equal to b\n");
  }
  if ( a == 0 && b == 0)
  { 
    printf("both variables are equal to zero\n");
  }
  else
  { 
    printf("not all variables are equal to zero\n");
  }
  if ( a == 0 || b == 0 ) 
  { 
    printf("one of the variables is equal to zero\n");
  }
   
}

