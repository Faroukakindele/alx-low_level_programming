#include "main.h"

/**
 *more_numbers- prints the numbers, from 0 to 14, i4 times followed by a new line
 * 
 * Description: Can only use _putchar 3 times
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
}uuv