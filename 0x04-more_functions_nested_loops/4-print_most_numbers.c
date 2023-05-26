#include "main.h"

/**
 * print_most_numbers - A function that print numbers from
 * 0 to 9 without printing 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if ((a == '2') || (a == '4'))
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
