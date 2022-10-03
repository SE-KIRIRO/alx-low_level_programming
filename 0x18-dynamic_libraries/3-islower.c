#include <stdio.h>
#include "main.h"
/**
 * _islower - check description
 * Description: it checks for a lowercase character
 * Return: 1 if lowercase 0 if uppercase
 * @c: character to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
