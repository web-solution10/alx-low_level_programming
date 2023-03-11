#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: the count of the arguements
 * @argv: array of pointers to the arguments
 * Return: 0
 */

int main(int argc __attribute__ ((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
