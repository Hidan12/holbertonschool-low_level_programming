#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)


{

	char str[] = "Look up!\n";

	char *ptr;


	ptr = string_toupper(str);

	printf("hola \n");

	printf("%s", ptr);

	printf("que hace");
	printf("%s", str);
	return (0);
}
