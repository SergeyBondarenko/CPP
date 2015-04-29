#include <iostream>
using namespace std;

namespace fst_space{
	void func(){
		cout << "1st namespace!" << endl;
	}
};

namespace snd_space{
	void func(){
		cout << "2nd namespace!" << endl;
	}
};

int main()
{
	fst_space::func();
	snd_space::func();	

	return 0;
}
