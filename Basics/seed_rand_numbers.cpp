#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int i, j;
	unsigned t;

	srand( (unsigned)time(NULL) );
	t = (unsigned)time(NULL);
	cout << t << "\n---\n";

	for(i = 0; i < 10; i++){
		j = rand();
		cout << j << "\n";
	}

	return 0;
}
