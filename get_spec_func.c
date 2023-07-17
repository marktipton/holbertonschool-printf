#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * spec_char - prints character
 *
 * @args: variable arguments passed to _printf function
 * Return: 1
 */

int spec_char(va_list args)
{
	int c = va_arg(args, int);
					
	_putchar(c);	/*
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
	int d;		/*integer to be printed*/
	int count, i;	/*character count and loop increment*/

	d = va_arg(args, int);	/*Set d equal to variable argument input*/
	count = 0, i = 10;

	if (d < 0)	/*If number is negative then print a '%' and flip*/
	{			/*the sign of the number so that it can be*/
		_putchar('-');	/*printed normally*/
		count++;
		d = -d;
	}
	while (d / i >= 10)	/*Find out how many digits the input number*/
	{			/*is by multiplying i by 10 until d*/
		i = i * 10;	/*divided by i is less than 10*/
	}
	while (i > 0)
	{				
		if (d < 10)	/*If d is less than 10 then print d, add*/
		{		/*one to the count and return count*/
			count += _putchar(d + '0');
			return (count);
		}		
			/*Otherwise,	
		count += _putchar(((d / i) % 10) + '0');
		i = i / 10;
	}
	return (count);
}
/**
 * get_spec_func - selects function to perform based on input format specifier
 *
 * @format: specifier passed as argument to _printf
 * @args: variable arguments passed to _printf function
 * Return: NULL if no match and the return of the specifier function if match
 */

int get_spec_func(char format, va_list args)
{
	spec_t spec[] = {	/*array of specifiers and corresponding functions*/
		{"c", spec_char},
		{"s", spec_string},
		{"d", spec_dec},
		{"i", spec_dec},
		{NULL, NULL},
	};
	int i, count;

	count = 0;
	i = 0;
	while (spec[i].spec)	/*While the specifier is not NULL, iterate*/
				/*through specifier array to check if the*/
				/*character passed matches the format input*/
	{
		if (*spec[i].spec == format)
		{
			count = spec[i].f(args); /*If the format matches*/
						/*then add the character count*/
		}				/*of that string, character, */
		i++;				/*or number.*/
	}
	return (count);
}
/**
 * spec_check_func - checks if format input is a format specifier
 *
 * @format: checks format specifiers
 * Return: 1 if specifier matches and 0 if not
 */

int spec_check_func(char format)		/*This function returns 1 if*/
{						/*format is a specifier*/
	char spec[] = {'c', 's', 'd', 'i'};
	int i = 0;

	while (spec[i])			/*Iterate to check format against all*/
	{				/*of the specifiers*/
		if (spec[i] == format)	
			return (1);	/*If format is a specifier then*/
		i++;			/*Return 1*/
	}
	return (0);		/*Return 0 if format is not a specifier*/
}
