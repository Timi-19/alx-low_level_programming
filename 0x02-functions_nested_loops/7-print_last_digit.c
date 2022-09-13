#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int ldigit = n % 10;

	if (ldigit < 0)
		ldigit *= -1;

	_putchar(ldigit + '0');

	return (ldigit);
}
