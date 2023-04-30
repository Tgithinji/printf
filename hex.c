#include "main.h"

/**
 * print_hex - prints the hexadecimal representation of an unsigned
 * int in small caps
 * @list: a list of arguments
 *
 * Return: length of characters printed
 */
int print_hex(va_list list)
{
	int length, i;
	unsigned int num, hex_nums[20];

	length = 0;
	num = va_arg(list, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	/* Repeatedly divide the num by 16 to get hexadecimal */
	while (num > 0)
	{
		hex_nums[length] = num % 16;
		num /= 16;
		length++;
	}

	/* print the digits in reverse since they were */
	/*   stored in the array in reverse */
	for (i = length - 1; i >= 0; i--)
	{
		if (hex_nums[i] > 9)
		{
			_putchar((hex_nums[i] - 10) + 'a');
		}
		else
		{
			_putchar(hex_nums[i] + '0');
		}
	}
	return (length);
}

/**
 * print_HEX - print hex numbers in all caps
 * @list: a list of arguments
 *
 * Return: length of printed characters
 */
int print_HEX(va_list list)
{
	int length, i;
	unsigned int num, HEX_nums[20];

	length = 0;
	num = va_arg(list, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		HEX_nums[length] = num % 16;
		num /= 16;
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		if (HEX_nums[i] > 9)
		{
			_putchar((HEX_nums[i] - 10) + 'A');
		}
		else
		{
			_putchar(HEX_nums[i] + '0');
		}
	}
	return (length);
}
