#include <iostream>

using namespace std;

const int MAX = 3;

int main()
{
	int arr[MAX] = {10, 20, 30};
	int *p;

	p = &arr[MAX-1];

	for(int i = 0; i < MAX; i++)
	{
		*p += 1;
		cout << i << " "<< p << " " << *p << "\n";
		p--;
	}

	return 0;
}
