#include<stdio.h>
#include"main.h"
/**
 * main - Entry point
 * return: Always 0 (success) 
 */
int main(void)
{	
	char str(8)= "_putchar";
	for (i=0; i<8; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return(0);
}

