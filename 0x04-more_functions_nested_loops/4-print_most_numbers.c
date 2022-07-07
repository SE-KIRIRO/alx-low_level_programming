#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 leaving 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char num;

	num = '0';
	for (; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		else
			_putchar(num);
	}
	_putchar('\n');
}
