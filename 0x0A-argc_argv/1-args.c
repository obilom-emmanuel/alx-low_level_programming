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
	if (argc > 0)
	{
		putchar(argc  - 1);
		putchar('\n');
		return (0);
	}
}
