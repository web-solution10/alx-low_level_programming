#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - A functions that prints the last digit of n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	rem = n % 10;
	printf("Last digit of %d is %d ", n, rem);
	if (rem > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (rem == 0)
	{
		printf("and is 0\n");
	}
	else if (rem < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
