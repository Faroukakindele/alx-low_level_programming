#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from to 98
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n < 90)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d",n);
		}
		  printf("%d",98);
	}
	if(n> 98)
	{
		for ( n = n; n > 98; n--)
		{
			printf("%d",n);
		}
		printf("%d",98);
	}
}


