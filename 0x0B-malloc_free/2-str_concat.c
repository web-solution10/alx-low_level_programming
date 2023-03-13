#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer that points to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int count1, count2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	count1 = 0;
	while (*(s1 + count1) != 0)
		count1++;
	count2 = 0;
	while (*(s2 + count2) != 0)
		count2++;

	ptr = malloc(count1 + count2);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < count1; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (j = 0; j < count2; j++)
	{
		*(ptr + i) = *s2;
		i++;
		s2++;
	}
	return (ptr);
}
