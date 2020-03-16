#include "holberton.h"

int itoa(va_list arguments, char* buffer, unsigned int *position)
{
	int numbers = 0, negative = 0, count = 0;
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
		negative = 1;
	}
	reverse(buffer, position, count, negative);
}
