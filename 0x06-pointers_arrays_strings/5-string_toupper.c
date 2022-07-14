#include "main.h"
/**
 * string_toupper - changes lowecase characters to uppercase
 * @s: the input string
 * Return: character pointer to converted string
 */
char *string_toupper(char *s)
{
	char *start;

	start = s;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
