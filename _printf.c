#include "main.h"

int _printf(const char *format, ...) 
{
	int k, count = 0;
	int j = 0;
	char c;
	int i, count = 0;
	va_list args;

	va_start(args, format);
while (format[k] != '\0' && format != NULL)
{
	if (format[k] == '%')
	{
		k++;
		for (k = 0; format[k]; k++) 
		{
				if (format[k] == '%') 
					_putchar('%'); 
				else if (format[k] == 'c') 
				{
				}
				else if (format[k] == 's') 
				{
				}
				else if (format[k] == 'd')	
				{
				}
				else if (format[k] == 'i')
				{
				}
				else
				{
					_putchar(format[k]);
				}
		}
	}	
	va_end(args);
}
	return (count);
}
