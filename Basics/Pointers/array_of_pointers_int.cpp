#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
	int arr[MAX] = {10, 20, 30};
	int *p[MAX];

	for(int i = 0; i < MAX; i++){
		p[i] = &arr[i]; 
	}

	for(int i = 0; i < MAX; i++){
		cout << "*p[" << i << "] = " << *p[i] << endl;
	}

	return 0;
}
