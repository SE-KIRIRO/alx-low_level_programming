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
	int i;

	i = 0;
	count = 0;
	while (*(s + count) != '\0')
		count++;

	while (*(s + i) != *(s + count))
	{
		char temp = *(s + i);
		*(s + i) = *(s + (count - 1));
		*(s + (count - 1)) = temp;
		count--;
		i++;
	}
}
