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
	int count;

	count = 0;
	while (*dest)
	{
		dest++;
	}
	while (count < n && *src)
	{
		*dest++ = *src++;
		count++
	}
	*dest = '\0';
	return (desti);
}
