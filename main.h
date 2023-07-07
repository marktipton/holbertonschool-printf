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
	char (*f)(int a);
} spec_t;

int _printf(const char *format, ...);
int (*get_spec_func(char *s))(int);


#endif

