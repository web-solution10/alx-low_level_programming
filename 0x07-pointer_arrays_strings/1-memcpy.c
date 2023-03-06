#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of src bytes to be copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
}