#include "main.h"

int _printf(const char *format, ...)
{
	int k, j, count, find;
	va_list args;
	struct spec_t;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = 0, k = 0;
	while (format[k] != '\0' && format != NULL)
	{
		if (format[k] == '%')
		{
			k++;
			if (format[k] == '\0')
				continue;
			j = 0, find = 0;

				while (spec[i].spec)
				{
					if (*(spec[j] == format)) 
					count += spec[j].f(args);
					find = 1, k++;
					break;
				}

			if (find != 1)
			{
				if (format[k] == '%')
				{
					count += _putchar('%');
					k++;
				}
				else
					count += _putchar(format[k]);
			}
		}
		else
			count += _putchar(format[k]);
		k++;
	}
	va_end(args);

	return (count);
}
