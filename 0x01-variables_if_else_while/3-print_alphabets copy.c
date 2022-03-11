#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-Program entry point.
 *
 *Return: 0-no error, non-zero value if errorks.
 */
int main(void)
{
	char i;
	char j;
	 for(i = 'a'; i <= 'z'; i++)
	 {
		putchar(i);
	 }
	 for (j = 'A'; j <= 'Z'; j++)
	 {
		putchar(j);
	 }
	 
	putchar('\n');	
	return (0);
}