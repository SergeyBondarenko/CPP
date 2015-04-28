#include <iostream>

using namespace std;

class Box
{
	public:
		void setHeight(double i){
			height = i;
		}
		void setLength(double i){
			length = i;
		}
		void setBreadth(double i){
			breadth = i;
		}
		double getVolume(void){
			return (height * length * breadth);
		}
			
		Box operator+(const Box& b){
			Box box;
			box.length = this->length + b.length;
			box.height = this->height + b.height;
			box.breadth = this->breadth + b.breadth;
			return box;
		}

	private:
		double height;
		double length;
		double breadth;
};

int main()
{
	Box Box1;
	Box Box2;
	Box Box3;

	Box1.setHeight(5.0);
	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	
	Box2.setHeight(10.0);
	Box2.setLength(12.0);
	Box2.setBreadth(13.0);
	
	cout << Box1.getVolume() << endl;
	cout << Box2.getVolume() << endl;

	Box3 = Box1 + Box2;	

	cout << Box3.getVolume() << endl;

	return 0;
}
		
