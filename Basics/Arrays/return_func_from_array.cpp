#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int * getRandom();

int main()
{
	int *p;

	p = getRandom();

	for(int i = 0; i < 5; i++){
		cout << "*(p + " << i << ") = " << *(p + i) << endl;
	}

	return 0;
}

int * getRandom()
{
	static int arr[5];

	srand( (unsigned)time(NULL) );

	for(int i = 0; i < 5; i++){
		arr[i] = rand();
		cout << arr[i] << endl;
	}

	return arr;

}
