#include "main.h"

/**
 * print_octal - prints octal numbers
 * @list: a list of arguments
 *
 * Return: length
 */
int print_octal(va_list list)
{
	unsigned int num, octal_nums[20];
	int length, i;

	num = va_arg(list, unsigned int);
	length = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	/* convert number to octal by repeatedly diving 8 */
	while (num > 0)
	{
		octal_nums[length] = num % 8;
		num /= 8;
		length++;
	}

	/* print octal in reverse order */
	/* array stored numbers starting from last number */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(octal_nums[i] + '0');
	}
	return (length);
}
