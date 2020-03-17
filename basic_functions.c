#include "holberton.h"
/**
 * *string_toupper - become the whole string to uppercase
 * @s: pointer to string
 *
 *Return: the string in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			/* The - 32 is for down positon to the upper string */
		}
		i++;
	}
	return (s);
}
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
 * reverse - revers
 * @buffer: Buffer
 * @position: Position
 * @count: Conut
 * @negative: Negative
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
