#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: the string to be searched
 * @needle: the string to be found
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *ptr;

	for (i = 0; *(haystack + i) != 0; i++)
	{
		if (*(haystack + i) == *needle)
		{
			break;
		}
	}
	ptr = haystack + i;
	for (j = 0; *(needle + j) != 0; j++)
	{
		if (*(needle + j) != *(haystack + i + j))
			return (NULL);
	}
	return (ptr);
}
