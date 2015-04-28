#include <iostream>
using namespace std;

class Shape
{
	protected:
		int wid, len;
	public:
		Shape(int w=0, int l=0){
			wid = w;
			len = l;
		}
		virtual int getArea() = 0;
		/*virtual int getArea(){
			cout << "Parent Shape class area ...";
			return 0;
		}*/
};

class Rectangle: public Shape
{
	public:
		Rectangle(int w=0, int l=0): Shape(w, l){}
		int getArea(){
			cout << "Rectangle area: ";
			return (wid * len);
		}
};

class Triangle: public Shape
{
	public:
		Triangle(int w=0, int l=0): Shape(w, l){}
		int getArea(){
			cout << "Triangle area: ";
			return ((wid * len) / 2);
		}
};

int main()
{
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);

	//cout << rec.getArea() << endl;
	//cout << tri.getArea() << endl;
	
	shape = &rec;
	cout << shape->getArea() << endl;

	shape = &tri;
	cout << shape->getArea() << endl;

	return 0;
}
