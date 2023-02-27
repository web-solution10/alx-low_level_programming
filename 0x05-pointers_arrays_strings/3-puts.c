#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: the string address that needed to be printed
 *
 * Return: no return
*/

void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
