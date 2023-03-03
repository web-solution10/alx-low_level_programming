#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination.
 * @src: source.
 *
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int count;

	count = 0;
	while (*(dest + count) != 0)
		count++;

	while (*src != 0)
	{
		*(dest + count) = *src;
		count++;
		src++;
	}
	return (dest);
}
