#include "main.h"

/**
 * _isalpha - test the input character whether it is alphabetic character or not
 *
 * @c: the input character
 *
 * Return: 1 when true , 0 when false
 */

int _isalpha(int c)
{
	if (c > 96 && c < 123 || c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
