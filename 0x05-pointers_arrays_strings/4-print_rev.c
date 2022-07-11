#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string parameter
 * Return: void
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	while (count > 0)
	{
		_putchar(*(s + (count--)-1));
	}
	_putchar('\n');
}
