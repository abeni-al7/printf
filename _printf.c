#include "main.h"

/**
 * _printf - prints a format string to stdout
 * @format: string to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int num = 0, i;
	char c, *str;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				num += print_char(c);
				i++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				num += print_str(str);
				i++;
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				num++;
				i++;
			}
		}
		_putchar(format[i]);
		num++;
		i++;
	}
	return (num);
}
