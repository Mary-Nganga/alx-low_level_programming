#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: Always 0.
 */

void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;

	}

	_putchar('\n');

}
