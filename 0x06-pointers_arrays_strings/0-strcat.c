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
	int d_cou;
	int s_cou;
	char *desti;

	desti = *dest; 
	d_cou = 0;
	while (*(dest + d_cou) != '\0')
	{
		d_cou++;
	}
	s_cou = 0;
	while (*(src + s_cou) != '\0')
	{
		*(dest + (d_cou + s_cou)) = *(src + s_cou);
		s_cou++;
	}
	*(dest + (d_cou + s_cou)) = '\0';
	return (desti);
}
