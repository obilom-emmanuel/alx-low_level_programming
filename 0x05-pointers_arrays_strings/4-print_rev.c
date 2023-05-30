#include "main.h"

/**
 * print_rev - A program that prints a string in reverse
 * @s: character to be printed.
 *
 * Return: 0 (Success)
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
