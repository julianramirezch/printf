#include "holberton.h"

/**
 * print_char - Print character.
 * @argum: va_list,
 * @buffer: Pointer.
 * @posi: Pointer to position buffer.
 * Return: Void.
 */
void print_char(va_list argum, char *buffer, unsigned int *posi)
{
	buffer[*posi] = va_arg(argum, int);
	*posi += 1;
}

/**
 * print_str - Print string.
 * @argum: va_list,
 * @buffer: Pointer.
 * @posi: Pointer to position buffer.
 * Return: Void.
 */
void print_str(va_list argum, char *buffer, unsigned int *posi)
{
	char *str = va_arg(argum, char*);
	int cont = 0;

	while (str[cont])
	{
		buffer[*posi] = str[cont];
		*posi += 1;
		cont++;
	}
}

/**
 * print_int - Print character.
 * @argum: va_list,
 * @buffer: Pointer.
 * @posi: Pointer to position buffer.
 * Return: Void.
 */
void print_int(va_list argum, char *buffer, unsigned int *posi)
{
	int num = va_arg(argum, int);
	int cont = 0;
	int copycont;
	int copynum;

	copynum = num;
	while (copynum / 10 > 0)
	{
		cont++;
		copynum = copynum / 10;
	}
	cont++;
	copycont = cont;
	while (cont > 0)
	{
		buffer[*posi + cont - 1] = num % 10 + '0';
		cont--;
		num = num / 10;
	}
	*posi += copycont;
}

/**
 * print_pct - Print Percent.
 * @argum: va_list,
 * @buffer: Pointer.
 * @posi: Pointer to position buffer.
 * Return: Void.
 */

void print_pct(va_list argum __attribute__((unused)), char *buffer, unsigned int *posi)
{
	buffer[*posi] = '%';
	*posi += 1;
}

/**
 * print_decimal - Print decimal.
 * @argum: va_list,
 * @buffer: Pointer.
 * @posi: Pointer to position buffer.
 * Return: Void.
 */
void print_decimal(va_list argum, char *buffer, unsigned int *posi)
{
	int j = va_arg(argum, int);
	int cont = 0;
	int copycont;
	int copyj = j;

	while ((copyj / 10) > 0)
	{
		cont++;
		copyj = (copyj / 10);
	}
	cont++;
	copycont = cont;
	while (cont > 0)
	{
		buffer[*posi + cont - 1] = (j % 10) + 48;
		cont--;
		j = (j / 10);
	}
	*posi += copycont;
}
