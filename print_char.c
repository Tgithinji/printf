#include "main.h"

/**
 * print_char - prints a character
 * @list: a list of arguments
 *
 * Return: length of printed characters
 */
int print_char(va_list list)
{
	int length;

	length = 0;
	_putchar(va_arg(list, int));
	length++;

	return (length);
}
