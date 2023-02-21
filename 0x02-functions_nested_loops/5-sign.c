#include "main.h"

/**
 * print_sign - chech the param c sign
 *
 * @n: input num
 *
 * Return: 1 when positive, 0 when 0, -1 when negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
