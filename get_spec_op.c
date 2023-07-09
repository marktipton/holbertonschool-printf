#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *get_spec_func - selects function to perform
 *
 * @va_list: variable arguments passed to _printf function
 *Return: operation or NULL
 */

int spec_char(va_list)
{
	char c;
	
	c = va_arg(args, int);
        if (c == '\0')
		return (0);		

	_putchar(c);
	return (1);	
}
/**
 *get_spec_func - selects function to perform
 *
 * @va_list: variable arguments passed to _printf function
 *Return: operation or NULL
 */

int spec_string(va_list)
{
	char *s = va_arg(args, char *);
	int string_count;

	for (j = 0; s[j]; j++)
	{
		_putchar(s[j]);
		string_count++;
	}

}
/**
 *spec_dec - selects function to perform
 *
 * @va_list: variable arguments passed to _printf function
 *Return: operation or NULL
 */

int spec_dec(va_list)
{
	int d;
	int dec_count = 0;

	if (va_list < 0)
	{
		_putchar('-');
		va_list = -va_list;
	}
	d = va_arg(args, int);
	_putchar(d + '0');

	count++;

}
/**
 *spec_int - selects function to perform
 *
 * @va_list: variable arguments passed to _printf function
 *Return: operation or NULL
 */

int spec_int(va_list)
{
	int i; 
	int int_count;

	i = va_arg(args, int);
	_putchar(i + '0');
	int_count++;

}
/**
 *get_spec_func - selects function to perform
 *
 *@s: specifier passed as argument to _printf
 *@va_list: variable arguments passed to _printf function
 *Return: operation or NULL
 */

int (*get_spec_func(char *s))(va_list)
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

