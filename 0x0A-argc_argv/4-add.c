#include <stdio.h>
#include <stdlib.h>

/**
 * main - print addition of numbers
 * @argc: numbers of arguments
 * @argv: array of pointer
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 0; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[1][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
