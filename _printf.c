#include "main.h"

int _printf(const char *format, ...) 
{
	int i, count = 0;
	va_list args;

	va_start(args, format);

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
      count++;
    }
  }
  va_end(args);

	return count;
}
