#include <iostream>

using namespace std;

const int COL = 2;
const int ROW = 5;

int main()
{
	int arr[ROW][COL] = {{41,55}, {32, 89}, {6, 5}, {1, 3}, {8, 4}};

	for(int i = 0; i < ROW; i++){
		for(int j = 0; j < COL; j++){
			cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
		}
	}

	return 0;
}
