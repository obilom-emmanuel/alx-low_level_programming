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

	for (int i = 0; i <= 12; i++)
	{
		if (str[i] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(str[i]);
	}
	return (0);
}
