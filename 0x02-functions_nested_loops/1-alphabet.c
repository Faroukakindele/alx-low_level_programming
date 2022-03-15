#include "main.h"

/**
 *main-Program entry point.
 *
 *Return: 0-no error, non-zero value if errorks.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

