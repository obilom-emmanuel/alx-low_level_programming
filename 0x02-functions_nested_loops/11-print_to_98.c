#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: numbers to be printed.
 *
 */

void print_to_98(int n)
{
	int i;
	int j;

	if (n <= 98)
	{
		for (i > n; i <= 98; i++)
		{
			for (j > n; j <= 98; j++)
			{
				_putchar(' ');
			}
			_putchar(',');
		}
		_putchar(n);
	}
	else if (i == j)
	{
		_putchar('\n');
	}
}
