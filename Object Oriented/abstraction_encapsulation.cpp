#include <iostream>
using namespace std;

class Adder
{
	private:
		int total;
	public:
		Adder(int i = 0){
			total = i;
		}
		void addNum(int i){
			total += i;
		}
		int getTotal(){
			return total;
		}
};

int main()
{
	Adder a;

	a.addNum(10);
	a.addNum(5);

	cout << a.getTotal() << endl;

	return 0;
}
