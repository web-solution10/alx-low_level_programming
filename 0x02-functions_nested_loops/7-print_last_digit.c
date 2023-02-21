#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @x: input num
 *
 * Return: last digit
 */

int print_last_digit(int x)
{
	int a;

	a = x % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(48 + a);
	return (a);
}
