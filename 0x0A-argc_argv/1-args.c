#include <stdio.h>

/**
 * main - writes argument's number.
 * @argc: number of arguments.
 * @argv: name of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
