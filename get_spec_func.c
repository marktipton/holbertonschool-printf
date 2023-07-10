#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *spec_char - prints character
 *
 * @va_list: variable arguments passed to _printf function
 *Return: 1
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
 *spec_string - prints string
 *
 * @va_list: variable arguments passed to _printf function
 *Return: count of characters in string
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
 *spec_dec - prints integer
 *
 * @va_list: variable arguments passed to _printf function
 *Return: count of digits
 */

int spec_dec(va_list args)
{
	int d;
	int count, i;
	char buf[11];

	d = va_arg(args, int);
	count = 0;

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
 *Return: NULL if no match and the return of the specifier function if match
 */

int (*get_spec_func(char *s))(va_list)
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
	if (spec[i].spec == NULL)
		return (NULL);
	else
		return (spec[i].f(args));
}
