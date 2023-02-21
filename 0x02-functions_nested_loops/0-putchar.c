#include "main.h"
/**
 * main - prints _putchar
 *
 * Return 0 if successful
 */
int main(void)
{
	char str[] = "_putchar"
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
	return (0);
}
