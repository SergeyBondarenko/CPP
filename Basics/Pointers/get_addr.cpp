#include <iostream>
using namespace std;

int main()
{
	int i = 5;
	char mystr[10];
	
	int *p;
	p = &i;

	cout << "&i= " << &i << "\n";
	cout << "&mystr= " << &mystr << "\n";

	cout << "p= " << p << "\n";
	cout << "*p= " << *p << "\n";

	return 0;
}
