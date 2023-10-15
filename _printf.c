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
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				num += print_char(c);
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				num += print_str(str);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				num++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				num += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			num++;
		}
	}
	va_end(args);
	return (num);
}
