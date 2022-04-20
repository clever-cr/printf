#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: A string
 *
 * Return: the of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, n_printed = 0, r = 0;
	int (*f)(va_list);
	va_list args;


	if (!format)
		return (-1);


	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			f = get_func(&format[++i]);
			if (f)
			{
				r = f(args);
				i++;
			}
			else if (format[i] != ' ' && format[i])
				r = _putchar(format[i - 1]);
			else
			{
				va_end(args);
				return (-1);
			}

		}
		else
			r = _putchar(format[i++]);

		if (r > 0)
			n_printed += r;
	}
	va_end(args);
	return (n_printed);

}
