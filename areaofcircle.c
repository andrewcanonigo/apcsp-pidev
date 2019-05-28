#include <stdio.h> 


float areaOfcircle(float r)
{
	float square;
	float operate;

	square = r * r;
	operate = square * 3.14159;
	
	return operate;
}

int main ()
{
	float area;

	for (float r = 3.5; r <= 12.5; r++)
	{
		area = areaOfcircle(r);
		printf("With a radius of %f, the area of the circle would be %f.\n", r, area);
	}
}




//Order of operations: int main() -> The new function should be the operations aove and returning the area. calling the function should be under the for loop which should be/n
//under the main loop

// the function should be under the for loop. the parameter of the function should be r. Use r and set the variables based on r.

