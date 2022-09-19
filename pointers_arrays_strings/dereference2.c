#include <stdio.h>

/**
 * main - dereferencing pointers - example with int and char types
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;
	
	n = 98;
	p = &n;
	
	printf("FIRST EXAMPLE\n");
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	*p = 402;
	printf("New value of n: %d\n", n);

	/* Second example with char */
	printf("\n");
	printf("SECOND EXAMPLE\n");
	
	char c;
	char *pp;
	
	c = 'H';
	pp = &c;
	
	printf("Value of 'c': %c\n", c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'pp': %p\n", pp);
	printf("Address of 'pp': %p\n", &pp);

	*pp = 'o';
	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Value of '*pp': %d ('%c')\n", *pp, *pp);	
		
	return (0);
}
