#include "main.h"

/**
 * _pow_recursion - is a function that returns the
 * value of x raised to the power of y
 * @x: is the integer being worked on
 * @y: is the integer that is the power
 * return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return(-1);
	return(x * _pow_recursion(x, (y-1)));
}
