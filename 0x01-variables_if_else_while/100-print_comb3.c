#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			if (i == j)
				continue;
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
