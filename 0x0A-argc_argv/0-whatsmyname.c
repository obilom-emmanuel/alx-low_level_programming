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
	putchar(*argv[0]);
	putchar('\n');
	return (0);
}
