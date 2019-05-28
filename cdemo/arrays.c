#include <stdio.h>

void arrayAdd();
int main() 
{
 int arr[100];
 for (int i = 0; i <= 99; i++)
  {
    arr[i] = i * i;
    printf("At index %d, the value is %d.\n", i, arr[i]);
  }
  printf("\n\nThe new array is this:\n\n");
  arrayAdd(arr, 100, 20);
}

void arrayAdd(int* arr, int d, int n)
{
  for(int num = 0; num < d; num++)
  {
    arr[num] = arr[num] + n;
    printf("At index %d, the value is %d.\n", num, arr[num]);
  }
}
