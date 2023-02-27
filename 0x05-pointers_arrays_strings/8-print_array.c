#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: the array itself
 * @n: the number of elements of the array to be printed
 *
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
	else
		printf("\n");
}
