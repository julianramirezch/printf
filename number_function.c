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
	long int negative = 0, rem = 0, count = 0;
	long int num = va_arg(arguments,  int);

	if (num == 00 || num == 0)
	{
		buffer[*position] = '0';
		*position += 1;
		return (0);
	}
	if (num < 0)
	{
		negative = 1;
		num = -num;
	}
	while (num != 0)
	{
		rem = num % 10;
		buffer[*position] = (rem > 9)
			? (rem - 10) + 'A'
			: rem + '0';
		*position += 1;
		num /= 10;
		count++;
	}
	if (negative)
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
 * @arguments: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @position: is the size of the input
 *
 * Return: the pointer with the size of the printf
 */
int binary(va_list arguments, char *buffer, int *position)
{
	unsigned int rem = 0, count = 0;
	int num = va_arg(arguments,  int);

	if (num == 00 || num <= 0)
	{
		buffer[*position] = '0';
		*position += 1;
		return (0);
	}
	while (num != 0)
	{
		rem = num % 2;
		buffer[*position] = (rem > 9)
			? (rem - 10) + 'A'
			: rem + '0';
		*position += 1;
		num /= 2;
		count++;
	}

	reverse(buffer, position, count);

	return (*position);
}
/**
 * octal - is the function to convert octal to string
 * @argum: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @pos: is the size of the input
 *
 * Return: the pointer with the size of the printf
 */
int octal(va_list argum, char *buffer, int *pos)
{
	unsigned int rem = 0, count = 0;
	int num = va_arg(argum,  int);

	if (num == 00)
	{
		buffer[*pos] = '0';
		*pos += 1;
		return (0);
	}
	while (num != 0)
	{
		rem = num % 8;
		buffer[*pos] = (rem > 9)
			? (rem - 10) + 'A'
			: rem + '0';
		*pos += 1;
		num /= 8;
		count++;
	}

	reverse(buffer, pos, count);
	return (*pos);
}

/**
 * hexadown - is the function to convert int to hexadecimal string
 * @argum: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @pos: is the size of the input
 *
 * Return: the pointer with the size of the printf
 */
int hexadown(va_list argum, char *buffer, int *pos)
{
	int rem = 0, count = 0;
	int num = va_arg(argum,  int);

	if (num == 00)
	{
		buffer[*pos] = '0';
		*pos += 1;
		return (0);
	}
	while (num != 0)
	{
		rem = num % 16;
		buffer[*pos] = (rem > 9)
			? (rem - 10) + 'A'
			: rem + '0';
		*pos += 1;
		num /= 16;
		count++;
	}

	reverse(buffer, pos, count);
	return (*pos);
}

/**
 * hexaupper - is the function to convert int to hexadecimal string in format
 * upper case.
 *
 * @argum: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @pos: is the size of the input
 *
 * Return: the pointer with the size of the printf
 */
int hexaupper(va_list argum, char *buffer, int *pos)
{
	unsigned int rem = 0, count = 0;
	int num = va_arg(argum,  int);

	if (num == 00)
	{
		buffer[*pos] = '0';
		*pos += 1;
		return (0);
	}
	while (num != 0)
	{
		rem = num % 16;
		buffer[*pos] = (rem > 9)
			? (rem - 10) + 'A'
			: rem + '0';
		*pos += 1;
		num /= 16;
		count++;
	}
	string_todown(buffer, pos, count);
	reverse(buffer, pos, count);
	return (*pos);
}
