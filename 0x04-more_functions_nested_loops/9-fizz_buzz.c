#include <stdio.h>

/**
 * main - A program that solve "Fizz Buzz" from 1 to 100.
 * description - if number is 3, print Fizz.
 * else if number is 5, print Buzz.
 * else if number is 15, print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
