#include "main.h"

/**
 * _strstr - the function finds the first occurence
 * of the substring needle in the string haystack
 * the terminating null bytes are not compared
 * @haystack: string where the search is made
 * @needle: string whose occurence is searched in haystack
 * Returns: a pointer to the beginning of the located 
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (haystack)
	{
		i = 0;

		if (haystack[1] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return('\0');
}
