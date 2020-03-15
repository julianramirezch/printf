#include "holberton.h"
/**
 * _printf - The printf main function
 * @format: the recieve format.
 * Return: Pointer
 */
int _printf(const char *format, ...)
{
va_list arguments;
char *buffer = malloc(2048);
unsigned int cfor = 0;
unsigned int carg = 0;
unsigned int c = 0;
unsigned int *position;

cases print_format[] = {{'c', print_char}, {'s', print_str}, {'i', print_int},
		       {'%', print_percen}, {'d', print_decimal}, {0, NULL}};
position = &c;
va_start(arguments, format);
if (format == NULL)
	return (1);
while (format && format[cfor])
{
	if (format[cfor] == '%')
	{
		cfor++;
		carg = 0;
		while (print_format[carg].arg)
		{
			if (format[cfor] == print_format[carg].arg)
			{
				print_format[carg].f(arguments, buffer, position);
				break;
			}
			carg++;
		}
	}
	else
	{
		buffer[*position] = format[cfor];
		*position += 1;
	}
	cfor++;
}
write(1, buffer, *position);
va_end(arguments);
free(buffer);
return (*position);
}
