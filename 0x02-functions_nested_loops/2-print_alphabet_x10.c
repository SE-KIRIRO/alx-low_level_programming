#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 -  Prints the alphabet 10 times followed by a new line
 * Description : prints the alphabet 10 times followed by a new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i++ < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter++);
		}
		_putchar('\n');
	}
}
