#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to string
 * Return: 0
 */

void puts_half(char *str)
{
        int count = 0, n, i;

        while(str[count] != '\0')
        {
                count++;
        }
        if((count % 2) == 0)
        {
                n = count / 2;
        }
        else
        {
                n = (count - 1) / 2;
        }
        while(str[i] != '\0')
        {
                if(i >= (count - n))
                {
                        putchar(str[i++]);
                }
        }
        putchar('\n');
}


