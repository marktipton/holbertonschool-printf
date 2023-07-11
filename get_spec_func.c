#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * spec_char - prints character
 *
 * @args: variable arguments passed to _printf function
 * Return: 1
 */

int spec_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * spec_string - prints string
 *
 * @args: variable arguments passed to _printf function
 * Return: count of characters in string
 */

int spec_string(va_list args)
{
	char *s;
	int string_count, j;

	s = va_arg(args, char *);
	if (s != NULL)
	{
	string_count = 0;
	for (j = 0; s[j]; j++)
	{
		string_count += _putchar(s[j]);
	}
	return (string_count);
	}
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');

	return (6);
}
/**
 * spec_dec - prints integer
 *
 * @args: variable arguments passed to _printf function
 * Return: count of digits
 */

int spec_dec(va_list args)
{
	int d;
	int count, i;

	d = va_arg(args, int);
	count = 0, i = 10;

	if (d == INT_MIN)
	{
		_putchar('-');
		_putchar('2');

	d = d % 2000000000;
		d = -d;
		count += 2;
	}
	if (d < 0)
	{
		_putchar('-');
		count++;
		d = -d;
	}
	while (d / i >= 10)
	{
		i = i * 10;
	}
	while (i > 0)
	{
		if (d < 10)
		{
			count += _putchar(d + '0');
			return (count);
		}
		count += _putchar(((d / i) % 10) + '0');
		i = i / 10;
	}
	return (count);
}
/**
 * get_spec_func - selects function to perform
 *
 * @format: specifier passed as argument to _printf
 * @args: variable arguments passed to _printf function
 * Return: NULL if no match and the return of the specifier function if match
 */

int get_spec_func(char format, va_list args)
{
	spec_t spec[] = {
		{"c", spec_char},
		{"s", spec_string},
		{"d", spec_dec},
		{"i", spec_dec},
		{NULL, NULL},
	};
	int i, count;

	count = 0;
	i = 0;
	while (spec[i].spec)
	{
		if (*spec[i].spec == format)
		{
			count = spec[i].f(args);
		}
		i++;
	}
	return (count);
}
/**
 * spec_check_func - checks for specific specs
 *
 * @format: checks format specifiers
 * Return: 1 if specifier matches and 0 if not
 */

int spec_check_func(char format)
{
	char spec[] = {'c', 's', 'd', 'i'};
	int i = 0;

	while (spec[i])
	{
		if (spec[i] == format)
		return (1);
		i++;
	}
	return (0);
}
