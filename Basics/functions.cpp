#include <iostream>
using namespace std;

int max(int a, int b);

int main()
{
	cout << max(5, 2) << "\n";
	return 0;
}

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
