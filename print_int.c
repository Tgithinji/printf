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
	int length, i, negative, num, num_arr[20];

	num = va_arg(list, int);
	negative = 0;
	length = 0;
	if (num < 0)
	{
		_putchar('-');
		length++;
		negative = 1;
		num = -num;
	}
	for (i = 0; num > 0; i++)
	{
		num_arr[i] = num % 10;
		num /= 10;
		length++;
	}
	if (negative)
		i = length - 2;
	else
		i = length - 1;
	for (; i >= 0; i--)
	{
		_putchar(num_arr[i] + '0');
	}
	return (length);
}
