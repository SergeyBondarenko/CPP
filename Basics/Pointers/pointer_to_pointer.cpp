#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	int *ptr;
	int **pptr;

	i = 5;
	ptr = &i;
	pptr = &ptr;

	cout << i << endl;
	cout << *ptr << endl;
	cout << **pptr << endl;

	return 0;
}
