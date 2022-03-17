#include "main.h"

/**
 *more_numbers- prints the numbers, from 0 to 14, i4 times followed by a new line
 * Description: Can only use _putchar 3 times
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		
		_putchar('\n');
	}
	_putchar('\n');

}