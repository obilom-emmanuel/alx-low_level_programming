#include <stdio.h>

/**
 * main - Entry point
 * description - A program that print alphabet
 * both in lower and upper case
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int l = 97;
	int U = 65;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	while (U <= 90)
	{
		putchar(U);
		U++;
	}
	putchar('\n');
	return (0);
}
