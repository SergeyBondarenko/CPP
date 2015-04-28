#include <iostream>
#include <fstream>
using namespace std;

const int SIZE = 100;

int main()
{
	char data[SIZE];
	
	//Write
	ofstream outfile;
	outfile.open("afile.txt");

	cout << "Writing to the file" << endl;
	cout << "Enter your name: ";
	cin.getline(data, 100);
	outfile << data << endl;

	cout << "Enter your age: ";
	cin >> data;
	cin.ignore();
	outfile << data << endl;

	outfile.close();

	//Read
	ifstream infile;
	infile.open("afile.txt");
	cout << "Reading the file" << endl;
	infile >> data;
	cout << data << endl;
	infile >> data;
	cout << data << endl;
	
	infile.close();

	return 0;
}
