#include <iostream>

using namespace std;

class Box
{
	public:
		double height;
		double length;
		double breadth;
};

int main()
{
	double volume = 0.0;

	Box Box1;
	Box Box2;

	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;

	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.breadth = 13.0;

	volume = Box1.height * Box1.length * Box1.breadth;
	cout << volume << endl;

	volume = Box2.height * Box2.length * Box2.breadth;
	cout << volume << endl;
	
	return 0;
}
