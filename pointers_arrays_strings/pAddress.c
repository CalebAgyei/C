#include <stdio.h>

/**
 * main - pointers, printing the address of a pointer
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

	printf("PRINTING POINTER ADDRESS\n");
	printf("Address of pointer 'ptr': %p\n", &ptr);
	printf("Address of pointer 'p': %p\n", &p);
	printf("Address of pinter 'ptr2': %p\n", &ptr2);	
	
	int n;
	int *pt;
	
	printf("PRINTING MORE\n");
	n = 98;
	pt = &n;

	printf("Address of 'n': %p\n", &n);
	printf("Value of 'pt': %p\n", pt);
	printf("Address of 'pt': %p\n", &pt);
	return (0);
}
