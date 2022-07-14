#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to input string
 * Return: pointer to capitalized string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		if (checkoperator(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}
	return (s);
}

/**
 * checkoperator - checks for an operator
 * @c: character being checked
 * Return: integer
 */
int checkoperator(char c)
{
	int i;

	i = 0;
	char separators[13] = { ' ', '\t', '\n', ',', ';', '.',	'!', '?',
		'"', '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}
