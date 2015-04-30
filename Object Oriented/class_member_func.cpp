#include <iostream>
using namespace std;

class Box
{
	private:
		double height;
		double length;
		double breadth;
	public:
		double getVolume(void);
		void setDimensions(double h, double l, double b);
};

double Box::getVolume()
{
	return (height * length * breadth);
}

void Box::setDimensions(double h=0.0, double l=0.0, double b=0.0)
{
	height = h;
	length = l;
	breadth = b;
}

int main()
{
	double volume;
	Box Box1;

	Box1.setDimensions(5.0, 6.0, 7.0);
	volume = Box1.getVolume();

	cout << volume << endl;

	return 0;
}
