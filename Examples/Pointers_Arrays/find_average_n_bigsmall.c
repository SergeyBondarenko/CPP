#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
	int i, n;
	float arr[MAX], sum, avrg, big, small;

	sum = avrg = big = small = 0.0; 

	printf("Enter number of elements (1-100): ");
	scanf("%d", &n);

	while(n > 100 || n <= 0){
		printf("Your number must be in range 1-100: ");
		scanf("%d", &n);
	}

	printf("Enter elements one by one:\n");
	for(i = 0; i < n; i++){
		//scanf("%f", arr + i);
		scanf("%f", &arr[i]);
	}		

	small = *arr; 
	for(i = 0; i < n; i++){
		sum += *(arr + i);
		if(*(arr + i) > big)
			big = *(arr + i);
		if(*(arr + i) < small)
			small = *(arr + i);
	}

	printf("\n===\n");
	//for(i = 0; i < n; i++)
	//	printf("%f\n", *(arr + i));

	avrg = sum / n;
	printf("Average is %f\n", avrg);
	printf("Largest is %f\n", big);
	printf("Smallest is %f\n", small);

	return 0;
}
