#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: destination pointer
 * @src: source pointer
 * Return: char pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count;
	int i;

	count = 0;
	while (*(src + count) != '\0')
		count++;
	while (i < count)
	{
		*(dest + i) = *(src + (i++));
	}
	*(dest + i) = '\0';
	return (dest);
}
