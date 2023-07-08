#include "main.h"

int _printf(const char *format, ...) 
{
<<<<<<< HEAD
	int k, count = 0;
  int j = 0;
  char c;
=======
	int i, count = 0;
>>>>>>> ffd68e624072b2d3e8bba0f63e6c59f401ee81b7
	va_list args;

	va_start(args, format);

<<<<<<< HEAD
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
=======
	for (i = 0; format[i]; i++) 
	{
		if (format[i] == '%') 
		{
      switch (format[++i]) 
      {
        case 'c': {
          char c = va_arg(args, int);
          putchar(c);
          count++;
          break;
        }
        case 's': {
          char *s = va_arg(args, char *);
          for (int j = 0; s[j]; j++) {
            putchar(s[j]);
            count++;
          }
          break;
        }
        case '%': {
          putchar('%');
          count++;
          break;
        }
        default: 
		  {
          break;
        }
      }
    } 
    else 
    {
      putchar(format[i]);
>>>>>>> ffd68e624072b2d3e8bba0f63e6c59f401ee81b7
      count++;
    }
  }
  va_end(args);

	return count;
}
