#include <stdio.h>

/**
 * main - writes it's name.
 * @argc: arguement count.
 * @argv: array of pointer to arguement string.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
