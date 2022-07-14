#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: the string being worked on
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	char *start = s;
	int j = 0;
	char letter[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char sub[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (*s)
	{
		while (j < 10)
		{
			if (*s == letter[j])
				*s++ = sub[j++];
		}
	}
	return (start);
}
