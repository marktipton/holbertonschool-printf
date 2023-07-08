#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct spec - Struct used to group specifiers and specifier functions
 *
 * @spec: specifier
 * @f: The function associated with that specifier
 */
typedef struct spec
{
	char *spec;
	char (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
int (*get_spec_func(char *s))(va_list);
int _putchar(char c);
int spec_char(va_list);
int spec_string(va_list);
int spec_dec(va_list);
int spec_int(va_list);
#endif
