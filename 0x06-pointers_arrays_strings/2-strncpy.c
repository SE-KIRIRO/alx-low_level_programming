#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int count;
	char *start;
	char *desti;

	desti = dest;
	start = src;
	count = 0;
	while (*src)
	{
		src++;
		count++;
	}
	count++;
	if (n > count)
		n = count;
	src = start;
	for (i = 0; i < n; i++)
		*dest++ = *src++;
	return (desti);
}
