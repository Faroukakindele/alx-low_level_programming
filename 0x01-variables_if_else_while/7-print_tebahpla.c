#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-Program entry poinnts.
 *
 *Return: 0-no error, non-zero value if errors.
 */
int main(void)
{
	 char i;
	
	 for(i ='z'; i >= 'a'; i--)
	 {
		putchar(i);
	 }

	putchar('\n');	
	return (0);
}