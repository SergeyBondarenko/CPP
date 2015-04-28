#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t now = time(0);
	
	cout << "Number of sec since Jan 1, 1970: " << now << endl;
	tm *lt = localtime(&now);

	cout << "Year: " << 1900 + lt->tm_year << endl;
	cout << "Month: " << 1 + lt->tm_mon << endl;
	cout << "Day: " << lt->tm_mday << endl;
	cout << "Time: " << 1 + lt->tm_hour << ":"; 
	cout << lt->tm_min << ":" << lt->tm_sec << endl;	

	return 0;
}
