#include "main.h"
/**
 *_printf - prints characters, strings, and integers
 *
 * @format: characters to print
 * *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int count;
	va_list args;

	count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	count = specifier_cmp(format, args);
	va_end(args);

	return (count);
}
