#include <stdio.h>
#include <stdlib.h>

int swap(int *x, int *y);

int main()
{
	int a, b;

	printf("Enter number 'a' and 'b': ");
	scanf("%d%d", &a, &b);

	printf("Before swap: a= %d, b= %d\n", a, b);
	swap(&a, &b);
	printf("After swap: a= %d, b= %d\n", a, b);
	
	return 0;
}

int swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
