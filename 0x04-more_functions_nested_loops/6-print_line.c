#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times _ should be printed
 * Return:void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n >= 0)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			else
				_putchar('_');
		}
	}
}
