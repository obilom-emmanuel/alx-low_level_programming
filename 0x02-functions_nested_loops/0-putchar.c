#include <stdio.h>

/**
 * main - Entry point
 * description - A program that prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";

	int i = 0;

	while (i <= 12)
	{
		if (str[i] == '\0')
		{
			putchar('\n');
			i++;
			break;
		}
		else
			putchar(str[i]);
	}
	return (0);
}
