#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: first pointer
 * @b: second pointer
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
