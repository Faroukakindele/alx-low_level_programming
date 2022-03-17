#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line but not 2 or 4
 * Return: nothing
 */
void more_numbers(void)
{
	int c, i;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		c++;
		_putchar('\n');
	}
}