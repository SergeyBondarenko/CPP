#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t now = time(0);
	char *lt = ctime(&now);

	cout << lt << endl;

	tm *gt = gmtime(&now); 
	lt = asctime(gt);

	cout << lt << endl;
	
	return 0;
}
