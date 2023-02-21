#include "main.h"

/**
 * main - print the alphabet in lowercase
 *
 * Return: no return
 */

void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return;
}

