#include "main.h"

/**
 * print_char - prints a character
 * @args: character to print
 * Return: 1
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_str - prints a string
 * @args: string to print
 * Return: length of the string
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0, count = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			count++;
			i++;
		}
	}

	return (count);
}
