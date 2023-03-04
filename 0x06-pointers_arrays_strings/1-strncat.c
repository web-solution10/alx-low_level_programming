#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 *
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, limit;

	count = 0;
	while (*(dest + count) != 0)
		count++;

	limit = 0
	while (limit < n && *src != 0)
	{
		*(dest + count) = *src;
		count++;
		src++;
		limit++;
	}
	return (dest);
}
