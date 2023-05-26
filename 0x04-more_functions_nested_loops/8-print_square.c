#include "main.h"


/**
 * print_square - A program that prints a square.
 * @size: size of the square to be printed.
 */

void print_square(int size)
{
	int a, b;

	if (size < 1)
		_putchar('\n');

	a = 0;
	while (a  < size)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
