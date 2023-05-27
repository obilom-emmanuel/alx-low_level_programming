#include "main.h"

/**
 * print_line - A function that prints line.
 * @n: number of line to be printed.
 * Return: 0.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
