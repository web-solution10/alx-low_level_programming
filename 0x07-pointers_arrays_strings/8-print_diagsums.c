#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: the input matrix
 * @size: the size of the input matrix
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	i = 0;
	sum1 = 0;

	while (i < size * size)
	{
		sum1 = sum1 + a[i];
		i = i + size + 1;
	}
	printf("%d, ", sum1);
	i = size - 1;
	sum2 = 0;
	while (i < (size * size) - (size - 1))
	{
		sum2 = sum2 + a[i];
		i = i + size - 1;
	}
	printf("%d\n", sum2);
}