#include <iostream>
using namespace std;

const int MAX = 3;

int main()
{

	int var[MAX] = {10, 20, 30};
	int *p;

	p = var;
	//cout << *p << "\n";

	for(int i = 0; i < MAX; i++)
	{
		cout << i << " " << p << " " << *p  << "\n";
		p++;
	}

	return 0;
}
