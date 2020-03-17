#include "holberton.h"
/**
 * _printf - The printf main function
 * @format: the recieve format.
 * Return: Pointer
 */

int _printf(const char *format, ...)
{
	va_list argum;
	char *buffer = NULL;
	int cfor = 0, *pos = NULL, p = 0;
	int (*get_function)(va_list, char *, int *);
/* Asignando un puntero con un buffer principal */
	buffer = malloc(2048);
	if (!buffer || !format || (format[0] == '%' && format[1] == '\0'))
	{
		free(buffer);
		return (-1);
	}
	pos = &p;
	va_start(argum, format);
	while (format && format[cfor])
	{
		if (format[cfor] == '%')
		{
			cfor++;
			get_function = select_function(format[cfor]);
			if (get_function == NULL)
			{
				va_end(argum);
				free(buffer);
				return (-1);
			}
			else
				get_function(argum, buffer, pos);
		}
		else
		{
				buffer[*pos] = format[cfor];
				*pos += 1;
		}
		cfor++;
	}
	buffer[*pos] = '\0';
	write(1, buffer, *pos);
	free(buffer);
	va_end(argum);
	return (*pos);
}
