#include "main.h"

/**
 * print - print each character to stdout
 * @format: string passed to printf
 * Return: number of characters printed
 */

int print(const char *format, va_list args)
{
	unsigned int i = 0, count = 0, j = 0;
	sp sp_arr[] = { {'c', print_char},
			{'s', print_str}};

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == '%')
				count += _putchar('%');
			else
			{
				while (sp_arr[j].sp != '\0')
				{
					if (format[i] == sp_arr[j].sp)
					{
						count += sp_arr[j].f(args);
						break;
					}
					j++;
				}
				if (sp_arr[j].sp == '\0')
				{
					count += _putchar(format[i - 1]);
					count += _putchar(format[i]);
				}
			}
		}
		i++;
	}

	return (count);
}
					
