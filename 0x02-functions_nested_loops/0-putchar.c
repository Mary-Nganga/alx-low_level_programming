#include "main.h"
/**
 * main - prints _putchar
 *
 * Return 0 if successful
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

        for (i=0; c[i]; i++)
	{
	_putchar (c[i]);
	_putchar ('\n');
	}	

	return (0);
}
