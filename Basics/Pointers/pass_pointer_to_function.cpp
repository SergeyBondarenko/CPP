#include <iostream>
#include <ctime>

using namespace std;

void calcTime(unsigned long *t);

int main()
{
	unsigned long mytime;

	calcTime(&mytime);
	cout << mytime << endl;
	
	return 0;
}

void calcTime(unsigned long *t)
{
	*t = time(NULL);	
	return;
}
