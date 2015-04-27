#include <iostream>

using namespace std;

const int SIZE = 5;

//double getAverage(int arr[], int size);
//double getAverage(int arr[SIZE], int size);
double getAverage(int *arr, int size);

int main()
{
	int arr[SIZE] = {1000, 2, 3, 17, 50};
	double avg;

	avg = getAverage(arr, SIZE);
	cout << avg << endl;
	
	return 0;
}

//double getAverage(int arr[], int size)
//double getAverage(int arr[SIZE], int size)
double getAverage(int *arr, int size)
{
	double avg;
	int sum = 0;

	for(int i = 0; i < size; i++){
		sum += arr[i];
	}

	avg = double(sum) / size;

	return avg;
}
