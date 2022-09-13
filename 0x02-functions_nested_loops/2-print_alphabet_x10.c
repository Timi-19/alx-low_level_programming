#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int count = 0; 
	char n;

	while (count < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		count++;
		_putchar('\n');
	}
}
