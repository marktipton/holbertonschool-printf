#include "main.h"
/**
 *specifier_cmp - compares format characters to specifiers
 *
 * @format: characters for _printf to print
 * @va_list: variable arguments passed to _printf function
 *Return: number of characters printed
 */

int specifier_cmp(const char *format, va_list args)
{
	int count, k;

	k = 0, count = 0;
 	while (format[k] != '\0' && format != NULL)
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
			if (*get_spec_func((char) format[k], args) == NULL)
			{
				count += _putchar('%');
				count += _putchar(format[k]);
			}
			else
				count += *get_spec_func((char) format[k], args); 
                }
                else
                        count += _putchar(format[k]);
                k++;
	}
	return (count);
}
