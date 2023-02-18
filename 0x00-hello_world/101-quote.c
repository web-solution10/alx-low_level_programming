#include <unistd.h>

/**
 * main - my own printf
 *
 * Return: Always 1
 */

int main(void)
{
	char test[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(0, test, 59);
	return (1);
}
