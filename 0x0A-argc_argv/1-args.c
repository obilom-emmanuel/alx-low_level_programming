#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints the number of arguments passed to it.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 on Success.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		i = (argc - 1);
		putchar(i);
		putchar('\n');
		return (0);
	}
}
