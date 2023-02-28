#include "main.h"

/**
 * _puts - Emtry point
 * @str: The string to point
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');

}

