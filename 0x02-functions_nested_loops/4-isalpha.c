#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check description
 * Description: checks for alphabetic character
 * @c: is the character being checked
 * Return: 1 if alpha 0 if not alpha
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}
