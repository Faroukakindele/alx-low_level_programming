#include "main.h"

/**
 *more_numbers- prints the numbers, from 0 to 14, i4 times followed by a new line
 * Description: Can only use _putchar 3 times
 */

void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			putchar(c);
		}

		putchar('\n');
	}
	putchar('\n');

}

