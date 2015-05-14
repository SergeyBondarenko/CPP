#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[5];
	int i;

	printf("Enter array elements: \n");
	
	for(i = 0; i < 5; i++)
		scanf("%d", arr + i);
	
	printf("\n===\n");

	for(i = 0; i < 5; i++)
		printf("%d\n", *(arr + i));
	
	printf("\n===\n");

	for(i = 0; i < 5; i++)
		printf("%d\n", arr);
	
	return 0;
}
