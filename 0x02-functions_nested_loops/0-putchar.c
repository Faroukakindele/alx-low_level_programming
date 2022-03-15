#include "main.h"
#include <unistd.h>
/**
 *main-program entry point for execution.
 *Return:0-success
 */
int main(void)
{
		char word[9] = "_putchar\n";
		int i;

		for (i = 0; i < 9; i++)
		{
			_putchar(word[i]);
		}
		return (0);
		
}