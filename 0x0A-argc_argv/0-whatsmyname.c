#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints it's name.
 * @argc: array count.
 * @argv: strings of array.
 * Return: Success 0.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		char *pro = argv[0];

		for (i = 0; pro[i] != '\0'; i++)
		{
			putchar(pro[i]);
		}
		putchar('\n');
	}
	return (0);
}
