#include "main.h"

/**
 *_isupper - a function that checks for numberdigits
 *@c: a variable that stores letters
 *Return: Returns a value of 1 if the variable c contains an uppercase
 *letter.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}