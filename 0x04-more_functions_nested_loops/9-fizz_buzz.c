#include <stdio.h>

/**
 * main - prints Fizz, Buzz and fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", n);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
		printf("\n");
	return (0);
}
