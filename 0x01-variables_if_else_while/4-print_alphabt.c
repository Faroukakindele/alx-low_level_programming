#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-Program entrky point.
 *
 *Return: 0-no error, non-zero value if errors.
 */
int main(void)
{
	char i;
	 for(i = 'a'; i <= 'z'; i++)
	 {
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		 
		putchar(i);
	 }
	putchar('\n');	
	return (0);
}