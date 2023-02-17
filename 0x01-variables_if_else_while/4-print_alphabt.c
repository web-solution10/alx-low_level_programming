#include <stdio.h>

/**
 * main - print alphabet in lowercase except some letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphL[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alphL[i] == 'q' || alphL[i] == 'e')
			continue;
		putchar(alphL[i]);
	}
	putchar('\n');
	return (0);
}

