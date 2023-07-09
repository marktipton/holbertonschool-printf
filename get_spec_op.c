#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *get_spec_func - selects function to perform
 *
 * @s: specifier passed as argument to _printf
 *Return: operation or NULL
 */

int spec_char(va_list)
{
                        c = va_arg(args, int);
                        _putchar(c);
                        count++;	
}
/**
 *get_spec_func - selects function to perform
 *
 * @s: specifier passed as argument to _printf
 *Return: operation or NULL
 */

int spec_string(va_list)
{
                  char *s = va_arg(args, char *);
                        for (j = 0; s[j]; j++)
                        {
                                _putchar(s[j]);
                                count++;
                        }

}
/**
 *spec_dec - selects function to perform
 *
 * @s: specifier passed as argument to _printf
 *Return: operation or NULL
 */

int spec_dec(va_list)
{
	int d;
       
	d = va_arg(args, int);
	_putchar(d + '0');

	count++;

}
/**
 *spec_int - selects function to perform
 *
 * @s: specifier passed as argument to _printf
 *Return: operation or NULL
 */

int spec_int(va_list)
{
	int i; 
	int count;

	i = va_arg(args, int);
	_putchar(i + '0');
	count++;

}
/**
 *get_spec_func - selects function to perform
 *
 *@s: specifier passed as argument to _printf
 *
 *Return: operation or NULL
 */

int (*get_spec_func(char *s))(char)
{
	spec_t spec[] = {
		{"c", spec_char},
		{"s", spec_string},
		{"d", spec_dec},
		{"i", spec_int},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (spec[i].spec != NULL && *(spec[i].spec) != *s)
	{
		i++;
	}
	return (spec[i].f);
}

