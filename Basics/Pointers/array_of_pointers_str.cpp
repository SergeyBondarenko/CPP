#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
	char *arr[MAX] = {"How", "are", "you?"};

	for(int i = 0; i < MAX; i++){
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

	char **arr2;
	arr2 = arr;

	for(int i = 0; i < MAX; i++){
		cout << "**(arr2 + " << i << ") = " << **(arr2 + i) << endl;
	}
	
	return 0;
}
