#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: points to the source string
 * @dest: points to the destination string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *desti;

	desti = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (desti);
}
