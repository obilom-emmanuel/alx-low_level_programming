#include "main.h"

/**
 * print_sign - A function that prints the sign of a number.
 *
 * @n: The number sign to be printed.
 *
 * Return: 1 if the number is greater than zero,
 * 0 if the number is zero,
 * -1 if the number is less thsn zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
