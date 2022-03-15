#include "main.h"

/**
 *main-Program entry point.
 *
 *Return: 0-no error, non-zero value if errorks.
 */
void print_alphabet(void)
{
	char i;

	for ( i = "a"; i <= "z"; i++)
	{
		putchar(i);
	}
	
	putchar('\n');
}

