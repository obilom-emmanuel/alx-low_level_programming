#include <stdio.h>

/**
 * main - A program that prints multiples of 3 or 5 below 1024
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int sum = 0;

		for (i = 0; i < 1024; i++)
		{
			if ((i % 3 == 0) || (i % 5 == 0))
			{
				printf("%d\n", i);
				sum += i;
			}
		}
		printf("%d\n", sum);

		return (0);
}