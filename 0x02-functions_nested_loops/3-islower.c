#include "main.h"

/**
 * _islower - test the input character whether it is lowercase or not
 *
 * @c: the input character
 * Return: 1 when true , 0 when false
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
