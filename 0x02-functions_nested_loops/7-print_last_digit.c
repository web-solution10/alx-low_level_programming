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

	if (x < 0)
	{
		x = -x;
	}
	a = x % 10;
	_putchar(48 + a);
	return (a);
}
