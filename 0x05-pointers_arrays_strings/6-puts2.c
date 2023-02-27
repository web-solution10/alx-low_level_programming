#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *
 * @str: input string to be printed
 *
 * Return: no return
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
