#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-Program entry point.
 *
 *Return: 0-no error, non-zero value if errors.
 */
int main(void)
{
	 char i;
	 char hex[] = "0123456789abcdef";
	 for(i =0;i <= 16; i++)
	 {
		putchar(hex[i]);
	 }

	putchar('\n');	
	return (0);
}