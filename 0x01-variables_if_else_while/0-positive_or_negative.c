#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Determine if a number is positive , nagative or zero
 * Reeturn: Always  (Success)
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positve\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is nagative\n", n);
	}
	return (0);
}
