#include "main.h"

/**
 * print_line - A function that prints line.
 * @n: number of line to be printed.
 * Return: 0.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; n++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}
