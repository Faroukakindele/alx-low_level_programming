#include "main.h"

/**
 *print_alphabet - prints the english alphabet from a-z ten times.
 *
 *Return: 0-no error, non-zero value if errorks.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;
	for ( i = 0; i <=10; i++)
	{
		char c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
			i++;
	}
	
 
	
}

