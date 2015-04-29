#include <iostream>
using namespace std;

double devide(int x, int y){
	if(y == 0){
		throw "Division by zero condition!";
	}
	return (x / y);
}

int main()
{
	double z;
	int a = 50, b = 0;
	
	try{
		z = devide(a, b);
		cout << z << endl;
	} catch(const char *msg){
		cerr << msg << endl;
	}
	
	return 0;
}
