#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: parameter
 * @b: parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
