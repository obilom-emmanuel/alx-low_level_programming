#include "main.h"

/**
 * print_rev - A program that prints a string in reverse
 * @s: character to be printed.
 *
 * Return: 0 (Success)
 */

void print_rev(char *s)
{
	int i;

	for (i = 10; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
