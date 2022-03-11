#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-Program entry point.
 *
 *Return: 0-no ierror, non-zero value if errors.
 */
int main(void)
{
	int n;
	int ldigits;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigits=n % 10; 
	if (ldigits > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldigits);
	}
	else if (ldigits == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldigits);
	}
	else if (ldigits < 6 && ldigits != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigits);
	return (0);
}