#include <iostream>
using namespace std;

class Box
{
	private:
		double len;
		double hei;
		double bre;
	public:
		static int objCnt; 
		Box(double l=2.0, double h=2.0, double b=2.0){
			len = l; 
			hei = h; 
			bre = b;
			objCnt++;
		}
		double volume(void){
			return (len * hei * bre);
		}
		int compare(Box b){
			return this->volume() > b.volume();
		}
};

int Box::objCnt = 0;

int main()
{
	Box Box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0);
	
	Box *ptrBox;
	ptrBox = &Box1;

	if(Box1.compare(Box2))
		cout << "Box2 smaller then Box1" << endl;
	else
		cout << "Box2 larger then Box1" << endl;

	cout << Box1.volume() << endl; 
	cout << ptrBox->volume() << endl; 
	cout << Box::objCnt << endl;

	return 0;
}
