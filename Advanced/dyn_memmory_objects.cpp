#include <iostream>
using namespace std;

class Box
{
	public:
		Box(){
			cout << "Constructor is called!" << endl;
		}
		~Box(){
			cout << "Destructor is called!" << endl;
		}
};

int main()
{
	Box *Boxes = new Box[2];

	delete [] Boxes;

	return 0;
}
