#include "main.h"

/**
 * printf - function that produces output according to a format
 * @format: character string
 * Return: 1 if successful
 */

static int(*check_for_specifiers(const char * format))(va_list);
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}





int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char*);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}


int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}


void prtstr(va_list a)
{
	printf("****");
	int j = 0;
	while (s[i] != '\0')
	{
		int z = s[i];
		if ((z >= 0 && z <= 32) || z > 127)
		{
			putchar('\\');
			putchar('x');
			j++;
			if (z < 16)
			{
				putchar('0');
				// base(z, 16, 'X');
			}
		}
		putchar(s[j]);
		j++;
	}
}




int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int(*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_for_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putcha(format[i] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (count):
}




/**
 * main - entry point
 *
 * return: zero always
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("%b\n", 2288);


	_printf("%x\n", ui);
	printf("%x\n", ui);
	_printf("%S\n", "Best\nSchool");

	return (0);
}
	char *format[1000];

	printf("%s\n", format);
}
