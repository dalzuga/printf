#include "holberton.h"
#include <stdio.h>

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
	va_list arg_ptr;
	int j;
	fn_print params[] =
	{
		{'d', print_d},
		{0, 0}
	};

	/* format is the last required argument */
	va_start(arg_ptr, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; params[j].c; j++)
			{
				if (params[j].c == format[i + 1])
				{
					params[j].fp(&arg_ptr);
					i++;
				}
			}

			if (format[i + 1] == '%')
			{
				print_char('%');
			}

		}
		else
		{
			print_char(format[i]);
		}
	}

	return (i);
}

void _puts(const char *s)
{
	unsigned long int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		print_char(s[i]);
	}
}

void print_char(char c)
{
	write(1, &c, 1);
}
