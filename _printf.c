#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Produces output according to a format
 * @format: a string of characters
 *
 * Return: length
 */
int _printf(const char *format, ...)
{
	int length, i;
	char *str;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	length = 0;

	for (i = 0; *(format + i) != '\0' ; i++)
	{
		if (*(format + i) == '%')
		{
			i += 1;
			if (*(format + i) == 'c')
			{
				_putchar(va_arg(list, int));
				length += 1;
			}
			else if (*(format + i) == 's')
			{
				str = va_arg(list, char *);
				length += print_str(str);
			}
			else if (*(format + i) == '%')
			{
				_putchar('%');
				length++;
			}
		}
		else
		{
			_putchar(*(format + i));
			length++;
		}
	}
	va_end(list);
	return (length);
}
