#include <iostream>

using namespace std;

const int MAX = 5;

int main()
{
	double arr[MAX] = {10.1, 9.8, 8.3, 7.4, 6.2};
	double *p;
	
	p = arr;

	for(int i = 0; i < MAX; i++){
		cout << "*(p + 0) = " << *(p + i) << endl; 
		cout << "*(arr + 0) = " << *(arr + i) << endl; 
		cout << endl;
	}	
	return 0;
}
