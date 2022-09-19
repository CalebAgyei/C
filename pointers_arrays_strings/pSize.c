#include <stdio.h>

/**
 * main - pointers, printing the size (in bytes) of a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	/* pointer to an integer */
	int *ptr;
	int *p;

	/* pointer to a character */
	char *ptr2;

	printf("Size of pointer: %lu\n", sizeof(ptr));	
	printf("Size of pointer: %lu\n", sizeof(p));	
	printf("Size of pointer: %lu\n", sizeof(*ptr2));	
	return (0);
}
