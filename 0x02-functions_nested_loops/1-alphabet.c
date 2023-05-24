#include "main.h"

/**
 * print_alphabet - A program that prints lower case alphabets
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
