#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: string pointer
 * Return: void
 */
void _puts(char *str)
{
	int letter;

	letter = 0;
	while (*(str + letter) != '\0')
	{
		_putchar(*(str + letter));
		letter++;
	}
}
