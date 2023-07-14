#include <stdio.h>
/**
 * main - a program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long  l;
	long long ll;
	float f;

	printf("size of a char: %lu  byte(s)\n", sizeof(a));
	printf("size of an int: %lu  byte(s)\n", sizeof(b));
	printf("size of a long int: %lu  byte(s)\n", sizeof(l));
	printf("size of a long long int: %lu  byte(s)\n", sizeof(ll);
	printf("size of a float: %lu  byte(s)\n", sizeof(f));
	return (0);
}

