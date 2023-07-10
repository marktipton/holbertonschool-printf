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
 while (format[k] != '\0' && format != NULL)
        {
                if (format[k] == '%')
                {
                        k++;
                        if (format[k] == '\0')
                                continue;
                        j = 0;
                        find = 0;
                        for (; j < 5; j++)
                        {
                                if (format[k] == spec[j].spec)
                                {
                                        count += spec[j].f(args);
                                        find = 1;
                                        k++;
                                        break;
                                }
                        }
                        if (find != 1)
                        {
                                if (format[k] == '%')
                                {
                                        count += _putchar('%');
                                        k++;
                                }
                                else
                                        count += get_spec_func(format[k], args);
                        }
                }
                else
                        count += _putchar(format[k]);
                k++;

}
