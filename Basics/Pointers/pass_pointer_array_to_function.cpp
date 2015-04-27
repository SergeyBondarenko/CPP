#include <iostream>

using namespace std;

const int MAX = 5;

double getAvg(int *arr, int size);

int main()
{
	int myarr[MAX] = {1000, 2, 3, 17, 50}; 
	double avg;

	avg = getAvg(myarr, MAX);
	cout << avg << endl;

	return 0;
}

double getAvg(int *arr, int size)
{
	double avg;
	int i, sum = 0;

	for(i = 0; i < size; i++){
		sum += arr[i];
	}	

	avg = double(sum) / i;
	return avg;
}
