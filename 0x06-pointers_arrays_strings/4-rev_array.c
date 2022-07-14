#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an array
 * @n: the no of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int *new;
	int x;

	x = 0;
	j = n - 1;
	i = 0;
	while (n > i)
	{
		*(new + x) = *(a + j);
		j--, n--, x++;
	}
	a = new;
}
