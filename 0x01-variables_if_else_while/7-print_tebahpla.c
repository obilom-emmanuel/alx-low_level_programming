#include <stdio.h>

/**
 * main - Entry point
 * description - prints lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
	putchar(n);
n--;
	}
	putchar('\n');
	return (0);
}