#include "main.h"

/**
 * checks for a lowercase letter
 * @ c character to test
 * Returns 1 if its a lowercase and 0 if its not
 */
int _islower(int c)
{
	if(c >= 'a' && c <='z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



