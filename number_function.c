#include "holberton.h"

/**
 * itoaa - is the function to convert int to string
 * @arguments: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @position: is the size of the input
 * Return: the pointer with the size of the printf
 */
int itoaa(va_list arguments, char *buffer, int *position)
{
	int numbers = 0, count = 0;
	int n = va_arg(arguments, int);

	numbers = abs(n);
	if (numbers == 0)
	{
		buffer[*position] = '0';
		*position += 1;
	}
	while (numbers)
	{
		int r = numbers % 10;

		if (r >= 10)
		{
			buffer[*position] = 65 + (r - 10);
			*position += 1;
			count++;
		}
		else
		{
			buffer[*position] = 48 + r;
			*position += 1;
			count++;
		}
		numbers /= 10;
	}
	if (n < 0)
	{
		buffer[*position] = '-';
		*position += 1;
		count++;
	}
	reverse(buffer, position, count);
	return (*position);
}

/**
 * binary - is the function to convert binary to string
 * @argum: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @pos: is the size of the input
 * Return: the pointer with the size of the printf
 */
int binary(va_list argum, char *buffer, int *pos)
{
	int numbers = 0, count = 0, n;

<<<<<<< HEAD
	n = va_arg(argum, int);
	numbers = abs(n);

	if (numbers == 0)
	{
		buffer[*pos] = '0';
		*pos += 1;
	}
	while (numbers)
	{
		int r = numbers % 2;

		if (r >= 10)
		{
			buffer[*pos] = 65 + (r - 10);
			*pos += 1;
			count++;
		}
		else
		{
			buffer[*pos] = 48 + r;
			*pos += 1;
			count++;
		}
		numbers /= 2;
	}
	if (n < 0)
	{
		buffer[*pos] = '-';
		*pos += 1;
		count++;
	}
	reverse(buffer, pos, count);
	return (*pos);
}
/**
 * octal - is the function to convert octal to string
 * @argum: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @pos: is the size of the input
 * Return: the pointer with the size of the printf
 */

int octal(va_list argum, char *buffer, int *pos)
{
	int numbers = 0, count = 0, n;

	n = va_arg(argum, int);
	numbers = abs(n);
=======
	n = va_arg(argum, int);
	numbers = abs(n);
	if (numbers == 0)
	{
		buffer[*pos] = '0';
		*pos += 1;
	}
	while (numbers)
	{
		int r = numbers % 2;

		if (r >= 10)
		{
			buffer[*pos] = 65 + (r - 10);
			*pos += 1;
			count++;
		}
		else
		{
			buffer[*pos] = 48 + r;
			*pos += 1;
			count++;
		}
		numbers /= 2;
	}
	if (n < 0)
	{
		buffer[*pos] = '-';
		*pos += 1;
		count++;
	}
	reverse(buffer, pos, count);
	return (*pos);
}
/**
 * octal - is the function to convert octal
 * @argum: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @pos: is the size of the input
 * Return: the pointer with the size of the printf
 */
int octal(va_list argum, char *buffer, int *pos)
{
	int numbers = 0, count = 0, n;

	n = va_arg(argum, int);
	numbers = abs(n);
>>>>>>> dev_julian
	if (numbers == 0)
	{
		buffer[*pos] = '0';
		*pos += 1;
	}
	while (numbers)
	{
		int r = numbers % 8;

		if (r >= 10)
		{
			buffer[*pos] = 65 + (r - 10);
			*pos += 1;
			count++;
		}
		else
		{
			buffer[*pos] = 48 + r;
			*pos += 1;
			count++;
		}
		numbers /= 8;
	}
	if (n < 0)
	{
		buffer[*pos] = '-';
		*pos += 1;
		count++;
	}
	reverse(buffer, pos, count);
	return (*pos);
}

/**
<<<<<<< HEAD
 * hexadecimal - is the function to convert octal to string
=======
 * hexadecimal - is the function to convert int to string
>>>>>>> dev_julian
 * @argum: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @pos: is the size of the input
 * Return: the pointer with the size of the printf
 */
int hexadecimal(va_list argum, char *buffer, int *pos)
{
	int numbers = 0, count = 0, n;

	n = va_arg(argum, int);
	numbers = abs(n);
<<<<<<< HEAD

=======
>>>>>>> dev_julian
	if (numbers == 0)
	{
		buffer[*pos] = '0';
		*pos += 1;
	}
	while (numbers)
	{
		int r = numbers % 16;

		if (r >= 10)
		{
			buffer[*pos] = 65 + (r - 10);
			*pos += 1;
			count++;
		}
		else
		{
			buffer[*pos] = 48 + r;
			*pos += 1;
			count++;
		}
		numbers /= 16;
	}
	if (n < 0)
	{
		buffer[*pos] = '-';
		*pos += 1;
		count++;
	}
	reverse(buffer, pos, count);
	return (*pos);
}
