#include "main.h"
#include <unistd.h>
/**
 * _putchar.c - write the character c to stdout
 * @c: the character to print
 *
 * Return: on (success) 1.
 * on error, -1 is returned , and error is set approprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
