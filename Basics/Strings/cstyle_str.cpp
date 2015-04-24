#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char greets[] = "Hello";

	cout << greets << "\n";
	cout << greets[0] << "\n";
	
	char str1[] = "Hello";
	char str2[] = " Sergey!";
	char str3[10];
	int strl;

	strcpy(str3, str1);
	strcat(str1, str2);	
	strl = strlen(str2);

	cout << str3 << "\n";
	cout << str1 << "\n";
	cout << strl << "\n";
	

	return 0;
}

