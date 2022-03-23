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
	int mark[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	for (c = 0; c < 10; i++)
	{
		for (i = 0; i < 14; i++)
		{
			_putchar(mark[i]);
		}
		_putchar('\n');
	}
}
