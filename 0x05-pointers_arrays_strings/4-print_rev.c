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
	while (*s++ != '\0')
	{
		count++;
	}
	while (count)
	{
		_putchar(*(s + count--));
	}
	_putchar('\n');
}
