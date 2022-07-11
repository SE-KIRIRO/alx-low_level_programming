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
	int len;

	len = _strlen(s);
	count = len - 1;
	while (count <= 0)
	{
		_putchar(*(s + count--));
	}
	_putchar('\n');
}
