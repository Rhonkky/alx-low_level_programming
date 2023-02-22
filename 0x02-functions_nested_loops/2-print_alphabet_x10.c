#include "main.h"

/**
* print_alphabet_x10 -Prints 10 times the alphabet, in lowercase
* followed by a new line
* Return: Always 0.
*/
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z');

	{
	_putchar(alph);
	alph++;
	}
	_putchar('\n')
}
