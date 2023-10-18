#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: length of str
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * print_reverse - prints a reversed string
 * @args: string to reverse
 * Return: number of characters printed
 */

int print_reverse(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0, len = _strlen(str), i = len - 1;

	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
		count++;
	}

	return (count);
}
