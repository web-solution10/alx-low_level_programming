#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: input length of the line
 *
 * Return: no return
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
