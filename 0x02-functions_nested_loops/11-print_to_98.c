#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number print to 98, regardless < 98 or > 98
 * @n: number input
 * Return: always 0 (success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
