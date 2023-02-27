#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: the buffer that will recieve the copied string
 * @src: the buffer that will send the copied string
 *
 * Return: the dest buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (src[i] == '\0')
		{
			dest[i] = src[i];
			break;
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
