#include <stdio.h>
#include "main.h"

void stest(unsigned long int, unsigned int);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);

    stest(0, 0);
    stest(0, 5);
    stest(1, 0);
    stest(1, 5);
    stest(6, 2);
    stest(14, 2);
    stest(8, 0);
    stest(8, 3);
    stest(8, 4);
    return (0);
}


void stest(unsigned long int n, unsigned int ind)
{
	unsigned long int k = n;
	set_bit(&k, ind);
	printf("n = %lu, k = %lu\n", n, k);
}
