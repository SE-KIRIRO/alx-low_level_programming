#include <stdio.h>
#include "main.h"
/**
 * _abs - check description
 * Description: prints the absolute value of an integer
 * @n: the integer being checked
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (-n);
}
