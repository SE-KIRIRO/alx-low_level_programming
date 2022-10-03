#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: string pointer
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
}
