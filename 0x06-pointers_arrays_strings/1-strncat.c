#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two strings upto n bytes
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *desti;
	char *start;
	int count;
	int i;

	i = 0;
	desti = dest;
	start = src;
	count = 0;
	while (*dest)
		dest++;
	while (*src)
	{
		count++;
		*src++;
	}
	if (n > count)
		n = count;
	src = start;
	while (i < n)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (desti);
}
