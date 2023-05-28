#include "main.h"

/**
 * print_alphabet_x10 - print lower case alphabet x10
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
	{
			_putchar(letter);
		_putchar('\n');
	}
	}
}

