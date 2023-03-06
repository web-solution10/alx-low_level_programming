#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: pointer to the specified character
 * @c: the specified character
 * Return: pointer to the specified character
 */

char *_strchr(char *s, char c)
{
	for ( ; *s != 0; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (*s == 0)
		return (NULL);
}
