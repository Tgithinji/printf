#include "main.h"
#include <stdio.h>

int print_integer(int num);
/**
 * print_int - prints an int
 * @list: list of arguments
 * Return: length
 */
int print_int(va_list list)
{
	int len, num;

	num = va_arg(list, int);

	len = print_integer(num);
	return (len);
}

/**
 * print_integer - prints an integer
 * @num: integer to be printed
 *
 * Return: length
 */
int print_integer(int num)
{
	int length;

	length = 0;
	if (num < 0)
	{
		_putchar('-');
		length++;
		num = -num;
	}
	if (num / 10 != 0)
	{
		print_integer(num / 10);
	}
	num = ((num % 10) + '0');
	_putchar(num);
	length += 1;
	return (length);
}
