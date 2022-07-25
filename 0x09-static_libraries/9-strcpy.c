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

	count = 0;
	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	*(dest + count) = '\0';
	return (dest);
}
