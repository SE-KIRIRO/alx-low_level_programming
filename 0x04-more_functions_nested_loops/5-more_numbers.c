#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints 10 times the no's 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	char num;
	int line;

	num = '0';
	line = 0;
	for (; line < 10; line++)
	{
		while (num <= '14')
		{
			_putchar(num++);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
