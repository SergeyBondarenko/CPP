#include <stdio.h>
#include <math.h>

#define MAX 100

float sDeviation(float *elements, int n);

int main()
{
	float arr[MAX], avrg = 0.0;
	int i, n;

	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	printf("Enter elements: ");
	for(i = 0; i < n; i++)
		scanf("%f", arr+i); 

	for(i = 0; i < n; i++)
		avrg += *(arr+i);
	avrg /= n;

	printf("Average is %f\n", avrg);
	printf("Standart deviation is %f\n", sDeviation(arr, n));
}

float sDeviation(float *elements, int n)
{
	int i;
	float sum, avrg, variance;
	avrg = variance = 0.0;

	for(i = 0; i < n; i++)
		avrg += *(elements+i);
	avrg /= n;

	for(i = 0; i < n; i++){
		variance += pow((*(elements+i) - avrg), 2);
	}
	variance /= n; 

	return sqrt(variance);
	
}
