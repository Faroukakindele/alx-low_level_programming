#include "main.h"

/**
  * _isalpha - tests whether a character is a
 * lowercase  or uppercase or a number letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if it is a obeys the condition, 0 if it disobeys
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



