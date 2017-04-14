#include <unistd.h> 		/* write(2) */
#include <stdarg.h>		/* va_arg(3) */
#include "holberton.h"

/**
 * Allowed functions:
 *
 * write (man 2 write)
 * malloc (man 3 malloc)
 * free (man 3 free)
 * va_start (man 3 va_start)
 * va_end (man 3 va_end)
 * va_copy (man 3 va_copy)
 * va_arg (man 3 va_arg)
 */

int _printf(const char *format, ...)
{
	unsigned long int i;

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
	}

	return (i);
}

void _puts(const char *s)
{
	unsigned long int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}

void _putchar(char c)
{
	write(1, &c, 1);
}
