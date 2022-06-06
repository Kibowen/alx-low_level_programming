#include <stdio.h>

/**
 * main - entrypoint
 *
 * Return: Always 0 (success)
 *
 */

int main(void)

{

	char letters;

	int numbers;

	long digits;

	long long hugeDigits;

	float decimals;


	printf("Size of a char: %lu byte(s)\n", sizeof(letters));

	printf("Size of an int: %lu byte(s)\n", sizeof(numbers));

	printf("Size of a long int: %lu byte(s)\n", sizeof(digits));

	printf("Size of a long long int: %lu byte(s)\n", sizeof(hugeDigits));

	printf("Size of a float: %lu byte(s)\n", sizeof(decimals));

	return (0);

}
