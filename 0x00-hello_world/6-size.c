#include <stdio.h>
/**
 * main - A program that print the various sizes of a computer types
 *
 * Return: 0 (Success)
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of a char: %lu byte(s)\n", sizeof(a));
printf("size of an int: %lu byte(s)\n", sizeof(b));
printf("size of a long int: %lu byte(s)\n", sizeof(c));
printf("size of a long long int: %lu byte(s)\n", sizeof(d));
printf("size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
