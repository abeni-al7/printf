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
 * print_rot13
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

