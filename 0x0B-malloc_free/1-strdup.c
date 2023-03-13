#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies the string given as a parameter.
 * @str: the string to be copied
 * Return: a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 */

char *_strdup(char *str)
{
	char *ptr;
	int count, i;

	count = 0;
	while (*(str + count) != 0)
		count++;

	ptr = malloc(count);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		*(ptr + i) = *(str + i);

	return (ptr);
}
