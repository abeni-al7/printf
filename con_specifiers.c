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
	else
	{
		write(1, "(null)", 6);
		return (6);
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

/**
 * print_binary - print binary number
 * @args: number to convert to binary
 * Return: number of digits printed
 */

int print_binary(va_list args)
{
	unsigned int num = va_arg(args, int);
	int binary[32], i = 0, j, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		count++;
	}

	return (count);
}

/**
 * print_unsigned - print positive numbers
 * @args: number to print
 * Return: number of digits printed
 */

int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, int);
	int count = 0, digits[10], digit, top = -1;

	do {
		digit = n % 10;
		digits[++top] = digit;
		n /= 10;
	} while (n != 0);
	while (top >= 0)
	{
		digit = digits[top--];
		_putchar(digit + '0');
		count++;
	}

	return (count);
}

