#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to string
 * Return: 0
 */

void puts_half(char *str)
{
	int count;
	int evhalf;
	int odhalf;

	count = 0;
	while (*(str + count) != '\0')
		count++;
	if (count % 2 == 0)
	{
		evhalf = count / 2;
		while (count > evhalf)
		{
			_putchar(*(str + evhalf));
			evhalf++;
		}
	}
	else
	{
		odhalf = (count - 1) / 2;
		while (count > odhalf)
		{
			_putchar(*(str + odhalf));
			odhalf++;
		}
	}
}
