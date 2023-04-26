#include "main.h"
#include <stdio.h>

/**
 * print_str - prints a string to the stdout
 * @list: list of extra arguments
 *
 * Return: length of the string
 */
int print_str(va_list list)
{
	int length;
	char *str;
	char *nil = "(null)";

	str = va_arg(list, char *);

	length = 0;
	if (str == NULL)
	{
		while (*nil != '\0')
		{
			_putchar(*nil);
			length++;
			nil++;
		}
		return (length);
	}
	while (*str != '\0')
	{
		_putchar(*str);
		length++;
		str++;
	}
	return (length);
}
