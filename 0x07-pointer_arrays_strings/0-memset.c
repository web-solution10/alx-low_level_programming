#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s:  a pointer to the memory area
 * @b: the constant byte to be filled by
 * @n: number of memory bytes to be filled
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
