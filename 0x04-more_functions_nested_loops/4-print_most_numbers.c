#include "main.h"

/**
 * print_most_numbers - prints nums --> 0 to 9 except 2 & 4
 *
 * Return: no return
 */

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
		if (i == 50 || i == 52)
			continue;
	}
	_putchar('\n');
}
