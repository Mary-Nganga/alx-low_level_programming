#include <stdio.h>

/**
  * name_of_program -  function that prints the name of the program
  * @argc: is an integer that represents the number of arguments.
  * @*argv[]: is an array of strings that contains the arguements.
  * Return: 0
  */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("The name of the program is %s\n", argv[0]);

	if (argc > 1)
	{
		printf("The first argument is %s\n", argv[1]);
	}
	return (0);
}
