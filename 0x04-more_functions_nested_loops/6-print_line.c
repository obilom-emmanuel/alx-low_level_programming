#include "main.h"

/**
 * print_line - A function that prints line.
 * @n: number of line to be printed.
 * Return: 0.
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
