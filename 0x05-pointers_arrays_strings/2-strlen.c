#include <stdio.h>
#include "main.h"
/**
 * _strlen - gives the string length
 * @s: pointer to string
 * Return: string length
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
