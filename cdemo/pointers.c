#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa isx %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float x = 1;
  float y = 2;
  float* ptrtox = &x;
  float* ptrtoy = &y;

  printf("The value of x is %f\n", x);
  printf("The value of y is %f\n", y);
  printf("The address of x is %d\n", &x); 
  printf("The address of y is %d\n", &y); 


 float temp;
 
 temp = *ptrtox;
 x = *ptrtoy;
 y = temp;
 
 printf("The values of x and y have now swapped.\n");
 printf("The value of x is now %f, and the value of y is now %f.\n", x, temp);
}


