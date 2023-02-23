#include "main.h"

/**
 * print_most_numbers - prints nums --> 0 to 9 except 2 & 4
 *
 * Return: no return
 */

void print_most_numbers(void)
{
	int i;

	i = 47;
	while (i < 57)
	{
		i++;
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
