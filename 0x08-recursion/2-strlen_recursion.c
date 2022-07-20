#include "main.h"

/**
 * _strlen_recursion - a function that returns the legth  of a string
 * @s: an input string to be printed
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
