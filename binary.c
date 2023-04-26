#include "main.h"

/**
 * print_binary - prints a binary number from an unsigned int
 * @list: list of unknown arguments
 *
 * Return: length of printed characters
 */
int print_binary(va_list list)
{
	int binary_number, rem, base, length;
	unsigned int num;

	num = va_arg(list, unsigned int);
	binary_number = 0;
	base = 1;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		rem = num % 2;
		num = num / 2;
		binary_number = binary_number + rem * base;
		base = base * 10;
	}
	while (base > 1)
	{
		base = base / 10;
		_putchar(binary_number / base + '0');
		binary_number = binary_number % base;
		length++;
	}
	return (length);
}
