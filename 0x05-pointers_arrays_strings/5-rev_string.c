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

	count = 0;
	while (*(s + count) != '\0')
		count++;

	while (*s != *(s + count))
	{
		char temp = *s;
		*s = *(s + (count - 1));
		*(s + (count - 1)) = temp;
		count--;
		*s++;
	}
}
