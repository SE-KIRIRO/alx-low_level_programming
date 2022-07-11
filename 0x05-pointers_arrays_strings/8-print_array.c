#include <stdio.h>
#include "main.h"
/**
 * print_array - prints arrays
 * @a: is the array
 * @n: no of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		printf("%d, ", *(a + count++));
	}
}
