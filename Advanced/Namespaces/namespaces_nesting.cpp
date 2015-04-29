#include <iostream>
using namespace std;

namespace fst_space{
	void func(){
		cout << "1st namespace!" << endl;
	}
	namespace snd_space{
		void func(){
			cout << "2nd namespace!" << endl;
		}
	};
};


using namespace fst_space::snd_space;
int main()
{
	func();

	return 0;
}
