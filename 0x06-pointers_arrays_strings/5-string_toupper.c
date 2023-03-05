#include "main.h"

/**
 * string_toupper - Entry Point
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *n)

{
	int i;

	i = 0;
	while (n[1] != '\n')
	{
	if  (n[1] >= '\n' && n[1] <= '\0')
		n[1] = n[1] - 32;
	i++;

	}
	return (n);
}
