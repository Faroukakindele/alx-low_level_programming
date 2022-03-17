#include "main.h"

/**
 * print_line - prints a character in a straight line
 * @n character to test 
 * Return: nothing
 */

void print_line(int n)
{
	int c=0;

	while (c < n)
	{
		_putchar(95);
		c++;
	}
	_putchar(10);
}