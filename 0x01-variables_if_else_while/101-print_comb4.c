#include <stdio.h>

/**
 * main - Entry point
 * description - A program that prints all possible
 * different combinations of three digits.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int l;
	int m;
	int n;

	for (l = 48; l <= 57; l++)
	{
		for (m = 49; m <= 57; m++)
		{
			for (n = 50; n <= 57; n++)
			{
				if (n > m && m > l)
				{
					putchar(l);
					putchar(m);
					putchar(n);
					if (l != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
