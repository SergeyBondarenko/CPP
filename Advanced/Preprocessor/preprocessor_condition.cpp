#include <iostream>
using namespace std;
#define DEBUG

#define MIN(a,b) ((a < b) ? a : b)

int main()
{
	int x, y;
	x = 5;
	y = 2;

#ifdef DEBUG
	cerr << "Tracing inside main()" << endl;
#endif

	cout << MIN(5,2) << endl;

#if 0
	cout << MKSTR(HELLO C++) << endl;
#endif

#ifdef DEBUG
	cerr << "End of main()" << endl;
#endif
	return 0;	
}
