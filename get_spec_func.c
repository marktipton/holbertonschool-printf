#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *get_spec_func - selects function to perform
 *
 * @va_list: variable arguments passed to _printf function
 *Return: operation or NULL
 */

int spec_char(va_list args)
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

int spec_string(va_list args)
{
	char *s;
	int string_count, j;

	s = va_arg(args, char *);
	if (*s == '\0')
		return (0);
	string_count = 0;
	for (j = 0; s[j]; j++)
	{
		string_count += _putchar(s[j]);
	}
	return (string_count);

}
/**
 *spec_dec - selects function to perform
 *
 * @va_list: variable arguments passed to _printf function
 *Return: operation or NULL
 */

int spec_dec(va_list args)
{
	int d, count, i;
	char buf[11];

	d = va_arg(args, int);
	count = 0;
	if (d == NULL)
		return (0);

	if (d < 0)
	{
		_putchar('-');
		d = -d;
	}
	while (d / i >= 10)
	{
		i = i * 10;
	}
	while (i > 0)
	{
		buf[--count] = (d / i) % 10 + '0';
		i = i / 10;
	}
	return _putchar(buf[count]);
}
/**
 *get_spec_func - selects function to perform
 *
 *@s: specifier passed as argument to _printf
 *@va_list: variable arguments passed to _printf function
 *Return: operation or NULL
 */

int (*get_spec_func(char *s))(va_list args)
{
	spec_t spec[] = {
		{"c", spec_char},
		{"s", spec_string},
		{"d", spec_dec},
		{"i", spec_dec},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (spec[i].spec != NULL && *(spec[i].spec) != *s)
	{
		i++;
	}
	return (spec[i].f(args));
}
