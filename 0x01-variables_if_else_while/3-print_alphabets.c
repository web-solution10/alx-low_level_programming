#include <stdio.h>

/**
 * main - A function prints the alphabet in lower and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphL[26] = "abcdefghijklmnopqrstuvwxyz";
	char alphU[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphL[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alphU[i]);
	}
	putchar('\n');
	return (0);
}

