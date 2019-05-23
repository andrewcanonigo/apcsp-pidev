#include <stdio.h>

int main()
{
    float m;
    for (int i = 1; i <= 100; i++)
    {
        m = i / 2;
        if ( i % 2 == 0 )
        { 
         printf("%d divided by 2 is %f\n", i, m);
        }
        else
        {
         printf("%i is not divisible by 2\n", i);
        }
    }
   return 0;
}
