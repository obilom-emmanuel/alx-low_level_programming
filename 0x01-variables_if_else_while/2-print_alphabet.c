#include <stdio.h>

/**
 * main - A program that prints alphabets in a lower case
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int alp = 97;

	while (alp <= 122)
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
