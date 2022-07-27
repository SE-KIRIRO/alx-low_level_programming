#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: the argument count
 * @argv: the argument vector
 * Return: the number of arguments
 */

int main(int argc, char __attribute__((__unused))__ *argv[])
{
	printf("%d", argc - 1);
	return (0);
}
