#include <iostream>
using namespace std;

int main()
{
	int i = 5;
	char mystr[10];
	
	int *p;
	p = &i;

	cout << &i << "\n";
	cout << &mystr << "\n";

	cout << p << "\n";
	cout << *p << "\n";

	return 0;
}
