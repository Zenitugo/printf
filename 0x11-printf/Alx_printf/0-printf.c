#include "main.h"
#include <stdio.h>

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: 1 if successful
 */

int _printf(const char *format, ...)
{
	char format[1000];

	if (format > 0 && format <= 1000)
	{
		_printf("%s\n", format);
	}
}

int main( )
{
	char format[1000];

	printf("%s\n", format);
}
