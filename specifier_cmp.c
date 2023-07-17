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
	int count, k; /*count is the number of characters printed*/
			/*k is the index for the format string*/

	k = 0, count = 0;
	while (format && format[k]) /*Iterate through the format string while both*/
	{				/*format and format[k] are not NULL*/
		
		if (format[k] == '%')	/*Check for special '%' character*/
		{
			k++;		/*Iterate past '%' sign to check the next*/
			if (format[k] == '\0')	/*If the next character is null return -1*/
				return (-1);
			if (format[k] == '%')
			{			/*If next character is a percent, print it*/
				count += _putchar('%');
			}
			/*Check if next character is a valid format specifer,*/ 
			/*if it is not then just treat the '%' sign and the following*/
			/*character as normal and print them*/
			else if (spec_check_func(format[k]) == 0)
			{
				count += _putchar('%');
				count += _putchar(format[k]);
			}
			/*if next char is a format specifier then call the corresponding*/
			/*function and add the return of the function to the char count*/
			else
				count += get_spec_func(format[k], args);
		}
		else	/*if a character if not a '%' then print it*/
			count += _putchar(format[k]); 
		k++;
	}
	return (count); /*Return number of character printed*/
}
