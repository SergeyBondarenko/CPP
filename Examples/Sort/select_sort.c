#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
	int i, j, temp;
	int arr[MAX] = {5,3,9,8,4,7,6,2,1,0};

	for(i = 0; i < MAX; i++){
		for(j = i+1; j < MAX; j++){
			if(arr[i] > arr[j]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}	
		}
	}

	for(i = 0; i < MAX; i++)
		printf("%d ", arr[i]);

	printf("\n");

	return 0;
}
