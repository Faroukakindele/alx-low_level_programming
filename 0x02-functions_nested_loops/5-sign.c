#include "main.h"

/**
  * print_sign - teststhe sign  of a character
 * @c: character to test.
 * Return: 1 if it is positive and 0 if its negative and  -1 if obeys the condition, 0 if it disobeys
 */
int print_sign(int n)
{
	if ( n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	if( n > 0) 
	{
		_putchar('+');
		return (1);
	}
	else
	if(n == 0)
	{
		_putchar('0');
		return(0);
	}
}



