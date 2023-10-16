#include "main.h"

/**
 * _printf - prints a format string to stdout
 * @format: string to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int num;
	va_list args;

	if (!format || !format[1])
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(args, format);
	num = print(format, args);
	va_end(args);
	return (num);
}
