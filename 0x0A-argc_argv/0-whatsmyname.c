#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - writes it's name.
 * @argc: arguement count.
 * @argv: array of pointer to arguement string.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
