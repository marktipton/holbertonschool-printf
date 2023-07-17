#include "main.h"
/**
 *_printf - prints characters, strings, and integers
 *
 * @format: characters to print
 * *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int count;	/*number of characters printed*/
	va_list args; 	/*variable argument list*/

	count = 0;

	if (format == NULL)		/*check if format string is null*/
		return (-1);		/*return -1 if null*/

	va_start(args, format);
	count = specifier_cmp(format, args); /*set count to the return of the*/
					/*specifier_cmp function when it is given*/
					/*the format string and one of the args*/
	va_end(args);

	return (count);
}
