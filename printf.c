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
<<<<<<< HEAD
	int cfor = 0, l = 0, *len = NULL, p = 0, *pos = NULL;
	int (*get_function)(va_list, char *, int *, int *);/*valida formato*/

	if (format == NULL)
		return (-1);
	buffer = malloc(2048);/*asignando puntero buffer principal*/
	if (buffer == NULL)
		return (-1);
	len = &l;
	pos = &p;
=======
	int cfor = 0, *pos = NULL, a = 0;
/*Validacion si para ver si hay un formato*/
	int (*get_function)(va_list, char *, int *);

	if (format == NULL)
		return (-1);
/* Asignando un puntero con un buffer principal */
	buffer = malloc(50);
	if (buffer == NULL)
		return (-1);
	pos = &a;
>>>>>>> developer
	va_start(argum, format);
	while (format && format[cfor])
	{
		if (format[cfor] == '%')
		{
			cfor++;
			get_function = select_function(format[cfor]);
			if (get_function == NULL)
<<<<<<< HEAD
			{	va_end(argum);
				free(buffer);
				return (-1);
			}
			else
				get_function(argum, buffer, pos, len);
=======
			{
				break;
				return (-1);
			}
			else
				get_function(argum, buffer, pos);
>>>>>>> developer
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
<<<<<<< HEAD
	va_end(argum);
	free(buffer);
	return (*len);
=======
	free(buffer);
	va_end(argum);
	return (*pos);
}

/**
 * select_function - Select Function
 * @c: Character
 * Return: 0
 */
int (*select_function(char c))(va_list, char *, int *)
{
	int i = 0;

	cases print_format[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', itoaa},
		{'%', print_pct},
		{0, NULL}};

	while (print_format[i].arg)
	{
		if (print_format[i].arg == c)
		{
			return (print_format[i].f);
		}
		i++;
	}

	return (0);
>>>>>>> developer
}
