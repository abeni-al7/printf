#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 * Return: 1
 */

int print_char(char c)
{
	_putchar(c);
	return (1);
}

/**
 * print_str - prints a string
 * @str: string to print
 * Return: length of the string
 */

int print_str(char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		count++;
		i++;
	}

	return (count);
}
