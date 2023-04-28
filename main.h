#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct SPECIFIER - A structure storing a specifier and
 * a function that prints its content
 * @symbol: the specifier
 * @print: a function that pointer
 */
typedef struct SPECIFIER
{
	char symbol;
	int (*print)(va_list);
} print;

/* all functions */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_int(va_list list);
int print_str(va_list list);
int print_perc(va_list list);
int print_binary(va_list list);
int print_unsigned_int(va_list list);


#endif
