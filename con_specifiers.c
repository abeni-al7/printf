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

/**
 * print_int - Print the given number
 * @args: number to print
 * Return: number of digits printed
 */

int print_int(va_list args)
{
	int count = 0, digits[10], top = -1, digit;
	int n = va_arg(args, int);
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
		count++;
	}
	else
		num = n;
	do {
		digit = num % 10;
		digits[++top] = digit;
		num /= 10;
	} while (num != 0);
	while (top >= 0)
	{
		digit = digits[top--];
		_putchar(digit + '0');
		count++;
	}

	return (count);
}
