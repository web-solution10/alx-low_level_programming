#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: input string address
 *
 * Return: the string length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != 0)
	{
		len++;
	}
	return (len);
}
