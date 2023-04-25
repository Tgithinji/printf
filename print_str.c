#include "main.h"
#include <stdio.h>

/**
 * print_str - prints a string to the stdout
 * @str: the string to be printed
 *
 * Return: length of the string
 */
int print_str(char *str)
{
	int length;

	length = 0;
	if (str == NULL)
		return (-1);
	while (*str != '\0')
	{
		_putchar(*str);
		length++;
		str++;
	}
	return (length);
}
