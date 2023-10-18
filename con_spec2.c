#include "main.h"

/**
 * print_octal - print octal conversion of a number
 * @args: number to convert to octal
 * Return: number of digits printed
 */

int print_octal(va_list args)
{
	unsigned int n = va_arg(args, int);
	int octal[20], j;
	int i = 0, count = 0;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n != 0)
	{
		octal[i] = n % 8;
		n = n / 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octal[j] + '0');
		count++;
	}

	return (count);
}

/**
 * print_hexa - print hexadecimals in uppercase
 * @args: number to convert to hexadecimal
 * Return: number of digits printed
 */

int print_hexa(va_list args)
{
	unsigned int n = va_arg(args, int);
	char hexa[20];
	int i = 0, count = 0, rem, j;

	while (n != 0)
	{
		rem = n % 16;

		if (rem < 10)
			hexa[i] = rem + '0';
		else
			hexa[i] = rem + 55;
		n = n / 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hexa[j]);
		count++;
	}

	return (count);
}

/**
 * print_lower_hexa - print hexadecimals in lowercase
 * @args: number to convert to hexadecimal
 * Return: number of digits printed
 */

int print_lower_hexa(va_list args)
{
	unsigned int n = va_arg(args, int);
	char hexa[20];
	int i = 0, count = 0, rem, j;

	while (n != 0)
	{
		rem = n % 16;
		if (rem < 10)
			hexa[i] = rem + '0';
		else
			hexa[i] = rem + 87;
		n = n / 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hexa[j]);
		count++;
	}

	return (count);
}
