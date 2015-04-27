#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int SIZE = 5;

int * genRandom(void);

int main()
{
	int *ptr, i = 0;

	ptr = genRandom();
	while(i < SIZE){
		cout << "*(ptr + " << i << ") = " << *(ptr + i) << endl;
		i++;
	}

	return 0;
}

int * genRandom(void)
{
	static int arr[SIZE];
	srand((unsigned)time(NULL));

	for(int i = 0; i < SIZE; i++){
		arr[i] = rand();
		cout << arr[i] << endl;
	}

	return arr;
}
