#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: is the character being checked
 * Return: 1 if digit 0 if not digit
 */

int _isdigit(int c)
{
	char d = (char)c;

	if (d >= '0' && d <= '9')
	{
		return (1);
	}
	else
		return (0);
}
