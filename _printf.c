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
	int length = 0, i, j, struct_len;
	va_list list;
	print f[] = {
		{'c', print_char}, {'s', print_str}, {'%', print_perc}, {'d', print_int},
		{'i', print_int}, {'b', print_binary}, {'u', print_unsigned_int},
		{'o', print_octal}, {'x', print_hex}, {'X', print_HEX}};
	if (format == NULL)
		return (-1);
	va_start(list, format);
	struct_len = sizeof(f) / sizeof(f[0]);
	for (i = 0; *(format + i) != '\0' ; i++)
	{
		if (*(format + i) == '%')
		{
			i += 1;
			if (*(format + i) == '\0')
				return (-1);
			for (j = 0; j < struct_len; j++)
			{
				if (*(format + i) == f[j].symbol)
				{
					length += f[j].print(list);
					break;
				}
			}
			if (j == struct_len)
			{
				_putchar('%');
				_putchar(*(format + i));
				length += 2;
			}
		} else
		{
			_putchar(*(format + i));
			length++;
		}
	}
	va_end(list);
	return (length);
}
