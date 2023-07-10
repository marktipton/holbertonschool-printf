#include "main.h"
/**
 *specifier_cmp - compares format characters to specifiers
 *
 * @format: characters for _printf to print
 * @args: variable arguments passed to _printf function
 *Return: number of characters printed
 */

int specifier_cmp(const char *format, va_list args)
{
	int count, k;

	k = 0, count = 0;
	while (format && format[k])
	{
		if (format[k] == '%')
		{
			k++;
			if (format[k] == '\0')
				continue;
			if (format[k] == '%')
			{
				count += _putchar('%');
				k++;
			}
			if (spec_check_func(format[k]) == 0)
			{
				count += _putchar('%');
				count += _putchar(format[k]);
			}
			else
				count += get_spec_func(format[k], args);
		}
		else
			count += _putchar(format[k]);
		k++;
	}
	return (count);
}
