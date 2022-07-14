#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an array
 * @n: the no of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
