#include <iostream>
using namespace std;

int main()
{
	double *ptr = NULL;
	ptr = new double;
	
	*ptr = 10.23546;
	cout << *ptr << endl;

	delete ptr;

	return 0;
}
