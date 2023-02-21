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
	if (x < 0)
	{
		x = -x;
	}
	int a = x % 10;
	_putchar(*a);
	return (x % 10);
}
