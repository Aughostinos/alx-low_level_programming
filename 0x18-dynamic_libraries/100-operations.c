#include <stdio.h>

int sum(int a, int b)
{
	int result = a + b;

	return (result);
}

int subtact(int a, int b)
{
	int result = a - b;

	return (result);
}

int multiply(int a, int b)
{
	int result = a * b;

	return (result);
}

int division(int a, int b)
{
	if (b != 0)
	{
		int result = a / b;

		return (result);
	}
	else
		printf("Error");
}

int modulus(int a, int b)
{
	if (b != 0)
	{
		int result = a % b;

		return (result);
	}
	else
		printf("Error");
}
