#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - check description
 * Description: it prints the alphabet followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter++);
	}
	_putchar('\n');
}
