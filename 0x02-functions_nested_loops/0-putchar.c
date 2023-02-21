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

        for (i=0; c[i];)
	{
	_putchar (c[i]);
	 i++;
	}	

	return (0);
}
