#include <stdio.h>

int main()
{
	int n[]; /* n is an array of 10 integers */
	int i, j;

	/* initialize the elements of an array n to 0 */
	for (i = 0; i < 10; i++)
	{
		n[i] = i+100; /* set the element at location 1 to i+100;*/
	}

	/* output each array element's value */
	 
	for (j=0; j < 10; j++)
	{
		printf("Element[%d] = %d\n", j, n[j]);
	}

	return 0;
}
