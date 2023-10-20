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

/**
 * print_rot13 - prints a string in rot13
 * @args: string to rot 13
 * Return: number of characters printed
 */

int print_rot13(va_list args)
{
	char *s = va_arg(args, char *);
	int i, j, count = 0, len = _strlen(s);
	char *str = malloc(len + 1);
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		if (_isalpha(s[i]))
		{
			for (j = 0; j < 52; j++)
			{

				if (s[i] == s1[j])
				{
					str[i] = s2[j];
					break;
				}
			}
		}
		else
			str[i] = s[i];
		str[len] = '\0';
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	free(str);

	return (count);
}


/**
 * _isalpha - check for alphabetic character
 * @c: character to check
 * Return: 1 if c is alphabetic 0 otherwise
 */

int _isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/**
 * print_address - prints pointer value
 * @args: pointer to print
 * Return: number of characters printed
 */

int print_address(va_list args)
{
	int count = 0, i;
	unsigned long value;
	char hexa[] = "0123456789abcdef", values[20];
	void *p = va_arg(args, void *);

	if (p == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}

	value = (unsigned long)p;

	if (value == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}

	while (value > 0)
	{
		values[count] = hexa[value % 16];
		value /= 16;
		count++;
	}

	write(1, "0x", 2);
	count += 2;
	for (i = count - 1; i >= 0; i--)
		_putchar(values[i]);

	return (count);
}
