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
	int l = 97;

	for (n = 48; n <= 57; n++);
	{
		putchar(n);
	}
	while (l <= 102)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
