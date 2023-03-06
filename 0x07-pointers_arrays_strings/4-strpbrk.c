#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -searches a string for any of a set of bytes.
 * @s: input string to be searched
 * @accept: search key
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	for (i = 0; *(s + i) != 0; )
	{
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				ptr = s + i;
				return (ptr);
			}
		}
		i++;
		if (*(s + i) == 0)
			return (NULL);
	}
	return (0);
}
