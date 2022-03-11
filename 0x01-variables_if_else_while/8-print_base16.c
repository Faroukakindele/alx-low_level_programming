#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-Program entry point.
 *n
 *Return: 0-no error, non-zero value ]if errors.
 */
int main(void)
{
	 int i;
	 char hex [18] = "0123456789abcdef";
	 for(i =0;i < 16; i++)
	 {
		putchar(hex[i]);
	 }

	putchar('\n');	
	return (0);
}