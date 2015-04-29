#include <iostream>
using namespace std;

#define MIN(a,b) ((a < b) ? a : b)

int main()
{
	int x, y;
	x = 5;
	y = 2;

	cout << MIN(5,2) << endl;

	return 0;	
}
