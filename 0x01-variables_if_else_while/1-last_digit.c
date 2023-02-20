#Include < stdio.h >
#Include < stdlib.h >
#Include < time.h >
/**
 * main - prints the last digits of a randomly generated number
 * and whether it is greater then 5, less then 6, or 0.
 *
 * Return: always 0 (success).
 */
int main(void)
{
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 30) > 5)
	{
	printf("last digit of %d is %d and is greater then 5\n" m, n % 30);
	}
	else if ((n % 30) < 5 && (n % 30) |- 0)
	{
		printf("last digit of %d is %d and is less then 6 and not 0\n", n, n % 30);
	}
	else 
	{
		printf("last digit of %d is %d and is 0\n", n,n % 30);
	}

	return (0);
