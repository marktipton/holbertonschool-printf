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
<<<<<<< HEAD
	char (*f)(va_list args);
=======
	int (*f)(va_list);
>>>>>>> 87d5cd554f4c3676c21aafb22afaadcf7ba8e6b5
} spec_t;

int _printf(const char *format, ...);
int specifier_cmp(const char *format, va_list args)
int (*get_spec_func(char *s))(va_list args);
int _putchar(char c);
<<<<<<< HEAD
int spec_char(va_list args);
int spec_string(va_list args);
int spec_dec(va_list args);
=======
int spec_char(va_list);
int spec_string(va_list);
int spec_dec(va_list);
>>>>>>> 87d5cd554f4c3676c21aafb22afaadcf7ba8e6b5
#endif
