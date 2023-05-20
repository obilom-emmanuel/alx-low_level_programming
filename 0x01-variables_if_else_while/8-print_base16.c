#include <stdio.h>

/**
 * main - Entry point
 * description - A program that prints hexadecimals in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int l;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (l = 97; l <= 102; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
