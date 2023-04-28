#include "main.h"

/**
 * print_unsigned_int - prints an unsigned integer
 * @list: list of arguments pointing to an integer
 * Return: length of unsigned integer printed
 */

int print_unsigned_int(va_list list)
{
	unsigned int number, count, num;
	int length;

	number = va_arg(list, unsigned int);
	count = 1;
	length = 0;

	/* get the number of digits in the unsigned char */
	while (number / count >= 10)
	{
		count *= 10;
	}

	/* print each number one by one */
	for (; count >= 1; count /= 10)
	{
		num = number / count;
		num = num % 10;
		_putchar(num + '0');
		length++;
	}
	return (length);
}
