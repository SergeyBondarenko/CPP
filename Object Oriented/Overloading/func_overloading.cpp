#include <iostream>
#include <string>

using namespace std;

class Printer
{
	public:
		void printIt(int i){
			cout << "Integer: " << i << endl;
		}
		void printIt(double i){
			cout << "Double: " << i << endl;
		}
		//void printIt(char* c){
		void printIt(string c){
			cout << "Char: "  << c << endl;
		}
};

int main()
{
	Printer pt;

	pt.printIt(5);
	pt.printIt(100.23);
	pt.printIt("Learn C++");

	return 0;
}
