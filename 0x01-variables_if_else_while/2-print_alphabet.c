#include <stdio.h>

/**
 * main - A function prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
