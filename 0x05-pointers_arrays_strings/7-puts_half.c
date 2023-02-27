#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: input string to be printed in some case
 *
 * Return: no return
 */

void puts_half(char *str)
{
	int len, start;

	len = 0;
	while (*(str + len) != 0)
	{
		len++;
	}

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2;

	while (*(str + start) != 0)
	{
		putchar(*(str + start));
		start++;
	}
	putchar('\n');
}
