#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers.
 * @a: the square matrix of integers.
 * @size: the size of the matrix.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i); /* sum of the main diagonal */
		sum2 += *(a + i * size + (size - i - 1)); /* sum of the secondary diagonal */
	}

	_putchar(sum1 / 10 + '0');
	_putchar(sum1 % 10 + '0');
	_putchar('\n');

	_putchar(sum2 / 10 + '0');
	_putchar(sum2 % 10 + '0');
	_putchar('\n');
}

