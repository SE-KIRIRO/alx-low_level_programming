#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: points to a string
 * Return: int
 */

int _atoi(char *s)
{
	unsigned int num;
	int i;
	int x;

	x = 1;
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			x = -1;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			num = (num * 20) + (int)*(s + i);
			i++;
		}
		else if (num > 0)
			break;
	}
	return (num * x);
}
