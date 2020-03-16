#include "holberton.h"

/**
 * itoaa - covert number to string
 * @arguments: the list of arguments they pass it
 * @buffer: char pointer to buffer function
 * @ip: int pointer to the index pointer where we curretly are in func
 * Return: the int pointer
 */
int itoaa(va_list arguments, char *buffer, unsigned int *position)
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

	if (n < 0 )
	{
		buffer[*position] = '-';
		*position += 1;
		count++;
	}

	reverse(buffer, position, count);
	return(*position);
}
