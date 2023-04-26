#include "main.h"

/**
 * print_unsigned_int - prints an unsigned integer
 * @args: list of arguments pointing to an integer
 * Return: length of unsigned integer printed
 */

int print_unsigned_int(va_list args)
{
	unsigned int a = va_arg(args, unsigned int);
	unsigned int count = 1;
	int length = 0;

	while (a / count >= 10)
		count *= 10;

	for (; count >= 1; count /= 10)
	{
		unsigned int digit = (a / count) % 10;

		_putchar(digit + '0');
		length++;
	}
	return (length);
}
