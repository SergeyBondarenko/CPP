#include <iostream>

using namespace std;

void getSwapped(int& x, int& y);

int main()
{
	int a, b;
	a = 5;
	b = 10;

	cout << a << " " << b << endl;	
	getSwapped(a, b);
	cout << a << " " << b << endl;	

	return 0;
}

void getSwapped(int& x, int& y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;

	return;
}
