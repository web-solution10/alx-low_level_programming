#include "main.h"

/**
 * print_numbers - prints nums --> 0 to 9
 *
 * Return: no return
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
