#include "main.h"

/**
 * puts2 - A function that prints every other character
 * starting with the first character.
 * @str: string to be printed.
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *t = str;
	int p;

	while (*t != '\0')
	{
		t++;
		i++;
	}
	j = i - 1;
	for (p = 0; p <= j; j++)
	{
		if (p % 2 == 0)
		{
			_putchar(str[p]);
		}
	}
	_putchar('\n');
}
