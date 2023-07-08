#include "main.h"

int _printf(const char *format, ...) 
{
	int k, count = 0;
  int j = 0;
  char c;
	va_list args;

	va_start(args, format);

	for (k = 0; format[k]; k++) 
	{
		if (format[k] == '%') 
		{
       k++;
      {
        if (format[k] == 'c') 
        {
          c = va_arg(args, int);
          _putchar(c);
          count++;
        }
        else if (format[k] == 's') 
        {
          char *s = va_arg(args, char *);
          for (j = 0; s[j]; j++) 
          {
            _putchar(s[j]);
            count++; 
          }
        }
        if (format[k] == 'd')
        {
          int d = va_arg(args, int);
          _putchar(d + '0');
          count++;
        }
        else if (format[k] == 'i')
        {
          int i = va_arg(args, int);
          _putchar(i + '0');
          count++;
        }
        else if (format[k] == '%')
        {
          _putchar('%');
          count++;
        }
      }
    } 
    else
    {
      _putchar(format[k]);
      count++;
    }
  }
  va_end(args);

	return count;
}
