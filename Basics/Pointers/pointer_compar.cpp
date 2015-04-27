#include <iostream>

using namespace std;

const int MAX = 3;

int main()
{
	int arr[MAX] = {10,20,30};
	int *p;

	p = arr;
	int i = 0;

	while(p <= &arr[MAX-1])
	{
		cout << i << " " << p << " " << *p << "\n";
		i++; p++;
	}

	return 0;
}
