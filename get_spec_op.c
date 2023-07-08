#include "main.h"
#include <stdlib.h>
#include <string.h>
int spec_char(va_list)
{
	
}
int spec_string(va_list)
{

}
int spec_dec(va_list)
{

}
int spec_int(va_list)
{

}
/**
 *get_spec_func - selects function to perform
 *
 *@s: specifier passed as argument to _printf
 *
 *Return: operation or NULL
 */

int (*get_spec_func(char *s))(va_list)
{
	spec_t spec[] = 
	{
		{"c", spec_char},
		{"s", spec_string},
		{"d", spec_dec},
		{"i", spec_int},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (spec[i].spec != NULL && *(spec[i].spec) != *s)
	{
		i++;
	}
	return (spec[i].f);
}

