#include "main.h"

/**
 * print_binary - prints a binary number from an unsigned int
 * @list: list of unknown arguments
 *
 * Return: length of printed characters
 */
int print_binary(va_list list)
{
	int length, i;
	unsigned int num, binary_number[50];

	num = va_arg(list, unsigned int);
	length = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	
	for (i = 0; num > 0; i++)
	{
		binary_number[i] = num % 2;
		num /= 2;
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(binary_number[i] + '0');
	}
	return (length);
}
