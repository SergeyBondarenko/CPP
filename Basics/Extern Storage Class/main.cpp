#include <iostream>
using namespace std;

int i;
extern void wr_ext();

main()
{
	i = 5;
	wr_ext();
}
