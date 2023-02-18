#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i + 1; k < 58; k++)
			{
				for (l = j + 1; l < 58; l++)
				{
					if (i == j && i == k && i == l)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
