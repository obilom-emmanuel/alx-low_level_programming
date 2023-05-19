#include <stdio.h>

/**
 * main - Entry point
 * description - A program that prints alphabet
 * in a lower case without letter e and q
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
