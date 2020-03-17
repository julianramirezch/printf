#include "holberton.h"
/**
 * _abs - the function return always a positive numbers
 * @n: the character to print
 * Return: On success 1.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n = n * -1);
	}
	return (n);
}

/**
 * reverse - reverse the string to display in the correct way
 * @buffer: Buffer
 * @position: Position
 * @count: Conut
 */
void reverse(char *buffer, int *position, int count)
{
	int inicio = *position - count;
	int final = (*position - 1);
	char c;

	while (final >= inicio)
	{
		c = buffer[inicio];
		buffer[inicio] = buffer[final];
		buffer[final]  = c;
		inicio++;
		final--;
		position += 1;
	}
}
/**
 * string_todown - convert string to down case
 * @buffer: Buffer
 * @position: Position
 * @count: Conut
 */
void string_todown(char *buffer, int *position, int count)
{
	int inicio = *position - count;
	int final = (*position - 1);

	while (inicio <= final)
	{
		if (buffer[inicio] >= 'A' && buffer[inicio] <= 'Z')
		{
			buffer[inicio] += 32;
/* The - 32 is for down positon to the upper string */
		}
		inicio++;

	}
}
