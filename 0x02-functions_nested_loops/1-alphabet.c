#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - check description
 *
 * Description: print alowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a;

	for(a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
