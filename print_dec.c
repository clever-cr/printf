#include "main.h"
#include <stdio.h>

/**
 * print_dec - print a integer read from va_list
 * @args: A va_list object
 *
 * Return: The number of printed char
 */
int print_dec(va_list args)
{
	int n = 0, n_printed = 0, sign = 1;
	int digit = 0;
	int i = 0;
	char buffer[20] = {0,};

	n = va_arg(args, int);

	if (n < 0)
	{
		sign = -1;
		if (_putchar('-') != -1)
			n_printed++;
	}

	i = -1;
	while (n != 0)
	{
		buffer[++i] = n % 10;
		n /= 10;
	}

	if (i == -1)
		i = 0;

	while (i >= 0)
	{
		digit = buffer[i] * sign;
		if (_putchar('0' + digit) != -1)
			n_printed++;
		i--;
	}

	return (n_printed);
}
