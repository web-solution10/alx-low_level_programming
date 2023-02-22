#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase ten times
 *
 * Return: no return
 */

void print_alphabet_x10(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
