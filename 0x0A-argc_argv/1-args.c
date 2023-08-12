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
	int count = argc - 1;

	if (count == 0)
	{
		putchar('0');
	}
	else
	{
		while (count > 0)
		{
			putchar('0' + count % 10);
			count /= 10;
		}
	}
	putchar('\n');
	return (0);
}
