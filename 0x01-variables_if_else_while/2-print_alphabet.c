#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *maini-Program entry point.
 *
 *Return: 0-no error, non-zero value if errors.
 */
int main(void)
{
	char i;
	 for(i = 'a'; i <= 'z'; i++)
	 {
		putchar(i);
	 }
	putchar('\n');	
	return (0);
}