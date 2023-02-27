#include "main.h"

/**
 * rev_string - reverse an input string
 *
 * @s: input string for reversing
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int len;
	int i, j;
	char tmp;

	len = 0;
	while (*(s + len) != 0)
	{
		len++;
	}

	for (i = 0; i < (len - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(s + j);
			*(s + j) = *(s + (j - 1));
			*(s + (j - 1)) = tmp;
		}
	}
}
