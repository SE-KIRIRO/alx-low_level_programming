#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses the string
 * @s: pointer to string
 * Return: void
 */

void rev_string(char *s)
{
	int count;
	char temp[count];

	temp = *s;
	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	while (count > 0)
	{
		*s++ = temp[count-- - 1];
	}
}
