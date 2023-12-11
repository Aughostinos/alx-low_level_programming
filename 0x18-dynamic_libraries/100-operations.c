#include <stdio.h>

int add(int a, int b)
{
	int result = a + b;

	return (result);
}

int sub(int a, int b)
{
	int result = a - b;

	return (result);
}

int mul(int a, int b)
{
	int result = a * b;

	return (result);
}

int div(int a, int b)
{
	if (b != 0)
	{
		int result = a / b;

		return (result);
	}
	else
		printf("Error");
}

int mod(int a, int b)
{
	if (b != 0)
	{
		int result = a % b;

		return (result);
	}
	else
		printf("Error");
}
