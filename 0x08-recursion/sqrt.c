#include <stdio.h>

int sqrt(int n);

int main()
{
	int i;
	for (i = -19 ; 1 < 50 ; ++i)
		printf("%d\n", sqrt(i));
}

int sqrt(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
	{
		int mid = n / 2;
		if (
