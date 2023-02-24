#include "main.h"

int _putchar(char c) {
	write(1, & c, 1);
	return (0);
}

int print_char(va_list c) {
	_putchar(va_arg(c, int));
	return (1);
}

int print_str(va_list s) {
	int c, counts = 0;
	char * str = va_arg(s, char *);
	if (str == NULL) {
		write(1, "(null)", 6);
		return (6);
	}
	for (c = 0; str[c] != '\0'; c++) {
		_putchar(str[c]);
		counts++;
	}
	return (counts);
}

int print_numbers(va_list v) {
	long int value;
	int denom = 1, counts = 0;
	value = va_arg(v, int);
	if (value < 0) {
		_putchar('-');
		counts++;
		value *= -1;
	}
	while (value / denom > 9) {
		denom *= 10;
	}
	while (denom >= 1) {
		_putchar((value / denom) + '0');
		counts++;
		value %= denom;
		denom /= 10;
	}
	return (counts);
}


int (*func_picker(const char b))(va_list)
{
	int c;
	print printf_arr[] = {
		{'c', print_char},
		{'d', print_numbers},
		{'i', print_numbers},
		{'s', print_str},
		{'\0', NULL}};

	for (c = 0; printf_arr[c].arg != '\0'; c++)
	{
		if (printf_arr[c].arg == b)
		{
			return (printf_arr[c].func);
		}
	}
	return (0);
}

int _printf(const char *format, ...)
{
	int c, output_counts = 0;
	va_list ap;
	va_start(ap, format);

	for (c = 0; format[c] != '\0'; c++)
	{
		if (format[c] == '%')
		{
			if (format[c + 1] == '%')
			{
				_putchar('%');
				output_counts++;
				c++;
			}

			else if (func_picker(format[c + 1]) != NULL)
			{
				output_counts += func_picker(format[c + 1])(ap);
				c++;
			}

			else
			{
				_putchar(format[c]);
				output_counts++;
			}
		}
		else
		{
			_putchar(format[c]);
			output_counts++;
		}
	}
	va_end(ap);
	return (output_counts);
}
