#include <iostream>

using namespace std;

class Shape
{
	public:
		void setWidth(int i){
			width = i;
		}
		void setHeight(int i){
			height = i;
		}
	protected:
		int width;
		int height;
};

class PaintCost
{
	public:
		int getPaintCost(int i){
			return (i * 10);
		}
};

class Rectangle : public Shape, public PaintCost
{
	public:
		int getArea(){
			return (width * height);
		}
}; 

int main()
{
	Rectangle Rect;

	Rect.setWidth(5);
	Rect.setHeight(7);
	int area = Rect.getArea();

	cout << "The area of recctangle is " << area << endl;
	cout << "Paint cost is " << Rect.getPaintCost(area) << endl;
	
	return 0;
}
