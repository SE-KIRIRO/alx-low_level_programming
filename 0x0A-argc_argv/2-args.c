#include <stdio.h>
/**
 * main - program that prints all arguments it recieves
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
