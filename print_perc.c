#include "main.h"
#include <stdio.h>

/**
 * print_perc - prints percent
 * @list: list of arguments
 *
 * Return: length of printed charcters
 */
int print_perc(__attribute__((unused)) va_list list)
{
	int length;

	length = 0;
	_putchar('%');
	length++;

	return (length);
}
