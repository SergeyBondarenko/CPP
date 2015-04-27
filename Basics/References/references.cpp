#include <iostream>

using namespace std;

int main()
{
	int a;
	double c;

	int& b = a;
	double& d = c;

	a = 1;
	c = 2;

	cout << b << " " << d << endl;

	return 0;
}
