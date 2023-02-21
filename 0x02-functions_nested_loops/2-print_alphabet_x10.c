#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet 10x
 * 
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 1;

	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
