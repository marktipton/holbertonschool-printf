#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct spec - Struct used to group specifiers and specifier functions
 *
 * @spec: specifier for _printf function
 * @f: The function associated with that specifier
 */
typedef struct spec
{
	char *spec;
	int (*f)(va_list args);
} spec_t;

int _printf(const char *format, ...);
int specifier_cmp(const char *format, va_list args);
int get_spec_func(char format, va_list args);
int spec_check_func(char format);
int _putchar(char c);
int spec_char(va_list args);
int spec_string(va_list args);
int spec_dec(va_list args);
#endif
