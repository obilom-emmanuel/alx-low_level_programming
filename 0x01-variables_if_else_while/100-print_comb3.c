#include <stdio.h>

/**
 * main - Entry point
 * description - A program that prints all possible
 * different combinations of two digits.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; n <= 57; n++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
